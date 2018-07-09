# Adafruit Board Driver NSIS Install Script
# Author: Tony DiCola

# Import some useful functions.
!include WinVer.nsh   # Windows version detection.
!include x64.nsh      # X86/X64 version detection.

!define VERSION 2.2.0.0

# Set attributes that describe the installer.
Icon "Assets\adafruit.ico"
Caption "Adafruit Board Drivers"
Name "Adafruit board drivers"
Outfile "adafruit_drivers_${VERSION}.exe"
ManifestSupportedOS "all"
SpaceTexts "none"

# Install driver files to a temporary location (then dpinst will handle the real install).
InstallDir "$TEMP\adafruit_drivers"

# Set properties on the installer exe that will be generated.
VIAddVersionKey /LANG=1033 "ProductName" "Adafruit Board Drivers"
VIAddVersionKey /LANG=1033 "CompanyName" "Adafruit Industries"
VIAddVersionKey /LANG=1033 "LegalCopyright" "Adafruit Industries"
VIAddVersionKey /LANG=1033 "FileDescription" "All in one installer for Adafruit's board drivers."
VIAddVersionKey /LANG=1033 "FileVersion" "2.2.0.0"
VIProductVersion ${VERSION}
VIFileVersion ${VERSION}

# Define variables used in sections.
Var dpinst   # Will hold the path and name of dpinst being used (x86 or x64).


# Define the standard pages in the installer.
# License page shows the contents of license.rtf.
PageEx license
  LicenseData "license.rtf"
PageExEnd

# Components page allows user to pick the drivers to install.
PageEx components
  ComponentText "Check the board drivers below that you would like to install.  Click install to start the installation." \
    "" "Select board drivers to install:"
PageExEnd

# Instfiles page does the actual installation.
Page instfiles


# Sections define the components (drivers) that can be installed.
# The section name is displayed in the component select screen and if selected
# the code in the section will be executed during the install.
# Note that /o before the name makes the section optional and not selected by default.

# This first section is hidden and always selected so it runs first and bootstraps
# the install by copying all the files and dpinst to the temp folder location.
Section
  # Copy all the drivers and dpinst exes to the temp location.
  SetOutPath $INSTDIR
  File /r "Drivers"
  File "dpinst-x64.exe"
  File "dpinst-x86.exe"
  # Set dpinst variable based on the current OS type (x86/x64).
  ${If} ${RunningX64}
    StrCpy $dpinst "$INSTDIR\dpinst-x64.exe"
  ${Else}
    StrCpy $dpinst "$INSTDIR\dpinst-x86.exe"
  ${EndIf}
SectionEnd

Section "Feather 32u4, Feather M0, Feather M0 Express, Metro M0 Express, Circuit Playground, CircuitPlayground Express, Gemma M0, Trinket M0, Itsy Bitsy 32u4 and M0, pIRKey M0, Flora, Bluefruit Micro" USBSER_BOARDS
  # Use dpinst to install the driver.
  # Note the following options are specified:
  #  /sw = silent mode, hide the installer but NOT the OS prompts (critical!)
  #  /path = path to directory with driver data
  ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\Adafruit_usbser"'
SectionEnd

Section "Feather WICED"
  # Install all three drivers (each _must_ be in its own directory or
  # dpinst will silently fail!).
  ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\Adafruit_Feather_WICED"'
  # Don't install CDC driver on Windows 10, but do install the other drivers for WICED.
  ${IfNot} ${AtLeastWin10}
    ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\Adafruit_Feather_WICED_CDC"'
  ${EndIf}
  ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\Adafruit_Feather_WICED_DFU"'
SectionEnd

Section "Trinket / Pro Trinket / Gemma (USBtinyISP)"
  ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\USBtinyISP"'
SectionEnd

Section /o "Arduino Gemma" ARDUINO_GEMMA
  ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\Arduino_Gemma"'
SectionEnd

Section /o "Feather HUZZAH ESP8266 (SiLabs CP210x)"
  ${If} ${AtMostWinVista}
    # Use older driver for XP & Vista.
    ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\SiLabs_CP210x\WinVista"'
  ${Else}
    # User newer driver for 7 and beyond.
    ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\SiLabs_CP210x\Win7"'
  ${EndIf}
SectionEnd

Section /o "Metro 328 / Metro Mini 328 (FTDI VCP and CP210X)"
  ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\FTDI_VCP_PORT"'
  ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\FTDI_VCP_BUS"'
  ${If} ${AtMostWinVista}
    # Use older driver for XP & Vista.
    ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\SiLabs_CP210x\WinVista"'
  ${Else}
    # User newer driver for 7 and beyond.
    ExecWait '"$dpinst" /sw /path "$INSTDIR\Drivers\SiLabs_CP210x\Win7"'
  ${EndIf}
SectionEnd

# Unselect, disable, and hide the given section.
!macro HideSectionMacro SectionId
  SectionSetFlags ${SectionId} ${SF_RO}
  SectionSetText ${SectionId} ""
!macroend

!define HideSection '!insertMacro HideSectionMacro'

Function .onInit
  # Hide all drivers that aren't needed in Windows 10.
  ${If} ${AtLeastWin10}
    ${HideSection} ${USBSER_BOARDS}
    ${HideSection} ${ARDUINO_GEMMA}
  ${EndIf}
FunctionEnd
