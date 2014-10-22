;------------------------------------------------------------------------------
;[Defines]
;------------------------------------------------------------------------------
#define MyAppName "Arduino Extensions"
#define MyAppVersion "1.0"
#define MyAppPublisher "Webmaster442"
#define MyAppURL "https://github.com/webmaster442/ArduinoExtensions"
#define FolderInstall "ignoreversion recursesubdirs createallsubdirs confirmoverwrite"
#define Types "compact custom full"


;------------------------------------------------------------------------------

[Setup]
;------------------------------------------------------------------------------
AppId={{E4EB4178-03E7-4514-88D8-C42B62FEB18A}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName=c:\arduino\
DefaultGroupName={#MyAppName}
OutputBaseFilename=setup-arduinotools
Compression=lzma2/ultra
SolidCompression=yes
PrivilegesRequired=lowest
EnableDirDoesntExistWarning=True
DirExistsWarning=no
AppendDefaultDirName=False
LanguageDetectionMethod=locale
InternalCompressLevel=ultra
MinVersion=0,5.01sp3
InfoBeforeFile=..\readme.md


;------------------------------------------------------------------------------
[Languages]
;------------------------------------------------------------------------------
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "brazilianportuguese"; MessagesFile: "compiler:Languages\BrazilianPortuguese.isl"
Name: "catalan"; MessagesFile: "compiler:Languages\Catalan.isl"
Name: "corsican"; MessagesFile: "compiler:Languages\Corsican.isl"
Name: "czech"; MessagesFile: "compiler:Languages\Czech.isl"
Name: "danish"; MessagesFile: "compiler:Languages\Danish.isl"
Name: "dutch"; MessagesFile: "compiler:Languages\Dutch.isl"
Name: "finnish"; MessagesFile: "compiler:Languages\Finnish.isl"
Name: "french"; MessagesFile: "compiler:Languages\French.isl"
Name: "german"; MessagesFile: "compiler:Languages\German.isl"
Name: "greek"; MessagesFile: "compiler:Languages\Greek.isl"
Name: "hebrew"; MessagesFile: "compiler:Languages\Hebrew.isl"
Name: "hungarian"; MessagesFile: "compiler:Languages\Hungarian.isl"
Name: "italian"; MessagesFile: "compiler:Languages\Italian.isl"
Name: "japanese"; MessagesFile: "compiler:Languages\Japanese.isl"
Name: "norwegian"; MessagesFile: "compiler:Languages\Norwegian.isl"
Name: "polish"; MessagesFile: "compiler:Languages\Polish.isl"
Name: "portuguese"; MessagesFile: "compiler:Languages\Portuguese.isl"
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl"
Name: "scottishgaelic"; MessagesFile: "compiler:Languages\ScottishGaelic.isl"
Name: "serbiancyrillic"; MessagesFile: "compiler:Languages\SerbianCyrillic.isl"
Name: "serbianlatin"; MessagesFile: "compiler:Languages\SerbianLatin.isl"
Name: "slovenian"; MessagesFile: "compiler:Languages\Slovenian.isl"
Name: "spanish"; MessagesFile: "compiler:Languages\Spanish.isl"
Name: "turkish"; MessagesFile: "compiler:Languages\Turkish.isl"
Name: "ukrainian"; MessagesFile: "compiler:Languages\Ukrainian.isl"


;------------------------------------------------------------------------------
[Files]
;------------------------------------------------------------------------------
Source: "..\bin-tools\termite\*"; DestDir: "{app}\bin-tools\termite"; Flags: {#FolderInstall}; Components: Tools\termite
Source: "..\reference\*"; DestDir: "{app}\reference"; Flags: {#FolderInstall}; Components: References
;------------------------------------------------------------------------------
Source: "..\hardware\attiny\*"; DestDir: "{app}\hardware\attiny"; Flags: {#FolderInstall}; Components: Hardware\attiny
Source: "..\hardware\breadboard\*"; DestDir: "{app}\hardware\breadboard"; Flags: {#FolderInstall}; Components: Hardware\breadboard
Source: "..\hardware\sanguino\*"; DestDir: "{app}\hardware\sanguino"; Flags: {#FolderInstall}; Components: Hardware\sanguino
;------------------------------------------------------------------------------
Source: "..\libraries\Adafruit-MCP23017\*"; DestDir: "{app}\libraries\Adafruit-MCP23017"; Flags: {#FolderInstall}; Components: Libs\MCP23017
Source: "..\libraries\avr-os\*"; DestDir: "{app}\libraries\avr-os"; Flags: {#FolderInstall}; Components: Libs\avros
Source: "..\libraries\Bounce2\*"; DestDir: "{app}\libraries\Bounce2"; Flags: {#FolderInstall}; Components: Libs\Bounce2
Source: "..\libraries\digitalWriteFast\*"; DestDir: "{app}\libraries\digitalWriteFast"; Flags: {#FolderInstall}; Components: Libs\digitalWriteFast
Source: "..\libraries\DS1307RTC\*"; DestDir: "{app}\libraries\DS1307RTC"; Flags: {#FolderInstall}; Components: Libs\DS1307RTC
Source: "..\libraries\FastDigital\*"; DestDir: "{app}\libraries\FastDigital"; Flags: {#FolderInstall}; Components: Libs\FastDigital
Source: "..\libraries\LedControl\*"; DestDir: "{app}\libraries\LedControl"; Flags: {#FolderInstall}; Components: Libs\LedControl
Source: "..\libraries\NewPing\*"; DestDir: "{app}\libraries\NewPing"; Flags: {#FolderInstall}; Components: Libs\NewPing
Source: "..\libraries\OneWire\*"; DestDir: "{app}\libraries\OneWire"; Flags: {#FolderInstall}; Components: Libs\OneWire
Source: "..\libraries\PortLib\*"; DestDir: "{app}\libraries\PortLib"; Flags: {#FolderInstall}; Components: Libs\PortLib
Source: "..\libraries\PS2Keyboard\*"; DestDir: "{app}\libraries\PS2Keyboard"; Flags: {#FolderInstall}; Components: Libs\PS2Keyboard
Source: "..\libraries\Time\*"; DestDir: "{app}\libraries\Time"; Flags: {#FolderInstall}; Components: Libs\Time
Source: "..\libraries\TinyWireM\*"; DestDir: "{app}\libraries\TinyWireM"; Flags: {#FolderInstall}; Components: Libs\TinyWireM
Source: "..\libraries\TinyWireS\*"; DestDir: "{app}\libraries\TinyWireS"; Flags: {#FolderInstall}; Components: Libs\TinyWireS
Source: "..\libraries\USBHostShield\*"; DestDir: "{app}\libraries\USBHostShield"; Flags: {#FolderInstall}; Components: Libs\USBHostShield
Source: "..\libraries\UtilLib\*"; DestDir: "{app}\libraries\UtilLib"; Flags: {#FolderInstall}; Components: Libs\UtilLib


;------------------------------------------------------------------------------
[Components]
;------------------------------------------------------------------------------
Name: "Hardware"; Description: "{cm:hardware}"; Types: {#Types}
Name: "Hardware\attiny"; Description: "ATtiny 44/45/84/85"; Types: {#Types}
Name: "Hardware\breadboard"; Description: "ATmega328p @ 8Mhz"; Types: {#Types}
Name: "Hardware\sanguino"; Description: "ATmega644/ATmega1284"; Types: {#Types}
;------------------------------------------------------------------------------
Name: "Libs"; Description: "{cm:libs}"; Types: {#Types}
Name: "Libs\MCP23017"; Description: "MCP23017"; Types: {#Types}
Name: "Libs\avros"; Description: "avr-os"; Types: {#Types}
Name: "Libs\Bounce2"; Description: "Bounce2"; Types: {#Types}
Name: "Libs\digitalWriteFast"; Description: "digitalWriteFast"; Types: {#Types}
Name: "Libs\DS1307RTC"; Description: "DS1307RTC"; Types: {#Types}
Name: "Libs\FastDigital"; Description: "FastDigital"; Types: {#Types}
Name: "Libs\LedControl"; Description: "LedControl"; Types: {#Types}
Name: "Libs\NewPing"; Description: "NewPing"; Types: {#Types}
Name: "Libs\OneWire"; Description: "OneWire"; Types: {#Types}
Name: "Libs\PortLib"; Description: "PortLib"; Types: {#Types}
Name: "Libs\PS2Keyboard"; Description: "PS2Keyboard"; Types: {#Types}
Name: "Libs\Time"; Description: "Time"; Types: {#Types}
Name: "Libs\TinyWireM"; Description: "TinyWireM"; Types: {#Types}
Name: "Libs\TinyWireS"; Description: "TinyWireS"; Types: {#Types}
Name: "Libs\USBHostShield"; Description: "USBHostShield"; Types: {#Types}
Name: "Libs\UtilLib"; Description: "UtilLib"; Types: {#Types}
;------------------------------------------------------------------------------
Name: "Tools"; Description: "{cm:tools}"; Types: {#Types}
Name: "Tools\termite"; Description: "Termite"; Types: {#Types}
Name: "References"; Description: "{cm:references}"; Types: full


;------------------------------------------------------------------------------
[CustomMessages]
;------------------------------------------------------------------------------
hungarian.tools=Eszközök
hungarian.libs=Könyvtárak
hungarian.references=Referencia lábkiosztások
hungarian.hardware=Hardver támogatás
;------------------------------------------------------------------------------
english.hardware=Hardware support
english.libs=Libraries
english.references=Reference pinouts
english.tools=Tools