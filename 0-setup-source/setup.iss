;------------------------------------------------------------------------------
;[Defines]
;------------------------------------------------------------------------------
#define MyAppName "Arduino Extensions"
#define MyAppVersion "2014-10-31"
#define MyAppPublisher "Webmaster442"
#define MyAppURL "https://github.com/webmaster442/ArduinoExtensions"
#define FolderInstall "ignoreversion recursesubdirs createallsubdirs"
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
WizardImageFile=E:\SVN\ArduinoExtensions\trunk\0-setup-source\art-big.bmp
WizardSmallImageFile=E:\SVN\ArduinoExtensions\trunk\0-setup-source\art-small.bmp

;------------------------------------------------------------------------------
[Languages]
;------------------------------------------------------------------------------
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "hungarian"; MessagesFile: "compiler:Languages\Hungarian.isl"

;------------------------------------------------------------------------------

[Files]
;------------------------------------------------------------------------------
Source: "..\readme.md"; DestDir: "{app}"; BeforeInstall: BackupIFExist
Source: "..\bin-tools\termite\*"; DestDir: "{app}\bin-tools\termite"; Flags: {#FolderInstall}; Components: Tools\termite; BeforeInstall: BackupIFExist
Source: "..\reference\*"; DestDir: "{app}\reference"; Flags: {#FolderInstall}; Components: References; BeforeInstall: BackupIFExist
;------------------------------------------------------------------------------
Source: "..\hardware\attiny\*"; DestDir: "{app}\hardware\attiny"; Flags: {#FolderInstall}; Components: Hardware\attiny; BeforeInstall: BackupIFExist
Source: "..\hardware\breadboard\*"; DestDir: "{app}\hardware\breadboard"; Flags: {#FolderInstall}; Components: Hardware\breadboard; BeforeInstall: BackupIFExist
Source: "..\hardware\sanguino\*"; DestDir: "{app}\hardware\sanguino"; Flags: {#FolderInstall}; Components: Hardware\sanguino; BeforeInstall: BackupIFExist
;------------------------------------------------------------------------------
Source: "E:\svn\ArduinoExtensions\trunk\examples\I2CTerminal\*"; DestDir: "{app}\examples\I2CTerminal"; Flags: {#FolderInstall}; Components: Libs\DS1307RTC Libs\MCP23017; BeforeInstall: BackupIFExist
;------------------------------------------------------------------------------
Source: "..\libraries\ADCLib\*"; DestDir: "{app}\libraries\ADCLib"; Flags: {#FolderInstall}; Components: Libs\ADCLib; BeforeInstall: BackupIFExist
Source: "..\libraries\AdafruitMCP23017\*"; DestDir: "{app}\libraries\AdafruitMCP23017"; Flags: {#FolderInstall}; Components: Libs\MCP23017; BeforeInstall: BackupIFExist
Source: "..\libraries\avros\*"; DestDir: "{app}\libraries\avros"; Flags: {#FolderInstall}; Components: Libs\avros; BeforeInstall: BackupIFExist
Source: "..\libraries\Bounce2\*"; DestDir: "{app}\libraries\Bounce2"; Flags: {#FolderInstall}; Components: Libs\Bounce2; BeforeInstall: BackupIFExist
Source: "..\libraries\digitalWriteFast\*"; DestDir: "{app}\libraries\digitalWriteFast"; Flags: {#FolderInstall}; Components: Libs\digitalWriteFast; BeforeInstall: BackupIFExist
Source: "..\libraries\DS1307RTC\*"; DestDir: "{app}\libraries\DS1307RTC"; Flags: {#FolderInstall}; Components: Libs\DS1307RTC; BeforeInstall: BackupIFExist
Source: "..\libraries\FastDigital\*"; DestDir: "{app}\libraries\FastDigital"; Flags: {#FolderInstall}; Components: Libs\FastDigital; BeforeInstall: BackupIFExist
Source: "..\libraries\LedControl\*"; DestDir: "{app}\libraries\LedControl"; Flags: {#FolderInstall}; Components: Libs\LedControl; BeforeInstall: BackupIFExist
Source: "..\libraries\NewPing\*"; DestDir: "{app}\libraries\NewPing"; Flags: {#FolderInstall}; Components: Libs\NewPing; BeforeInstall: BackupIFExist
Source: "..\libraries\OneWire\*"; DestDir: "{app}\libraries\OneWire"; Flags: {#FolderInstall}; Components: Libs\OneWire; BeforeInstall: BackupIFExist
Source: "..\libraries\PortLib\*"; DestDir: "{app}\libraries\PortLib"; Flags: {#FolderInstall}; Components: Libs\PortLib; BeforeInstall: BackupIFExist
Source: "..\libraries\PS2Keyboard\*"; DestDir: "{app}\libraries\PS2Keyboard"; Flags: {#FolderInstall}; Components: Libs\PS2Keyboard; BeforeInstall: BackupIFExist
Source: "..\libraries\RGBLedLib\*"; DestDir: "{app}\libraries\RGBLedLib"; Flags: {#FolderInstall}; Components: Libs\RGBLedLib;
Source: "..\libraries\Time\*"; DestDir: "{app}\libraries\Time"; Flags: {#FolderInstall}; Components: Libs\Time; BeforeInstall: BackupIFExist
Source: "..\libraries\TinyWireM\*"; DestDir: "{app}\libraries\TinyWireM"; Flags: {#FolderInstall}; Components: Libs\TinyWireM; BeforeInstall: BackupIFExist
Source: "..\libraries\TinyWireS\*"; DestDir: "{app}\libraries\TinyWireS"; Flags: {#FolderInstall}; Components: Libs\TinyWireS; BeforeInstall: BackupIFExist
Source: "..\libraries\USBHostShield\*"; DestDir: "{app}\libraries\USBHostShield"; Flags: {#FolderInstall}; Components: Libs\USBHostShield; BeforeInstall: BackupIFExist
Source: "..\libraries\UtilLib\*"; DestDir: "{app}\libraries\UtilLib"; Flags: {#FolderInstall}; Components: Libs\UtilLib; BeforeInstall: BackupIFExist
;------------------------------------------------------------------------------
Source: "..\bin-tools\termite\*"; DestDir: "{app}\libraries\UtilLib"; Flags: {#FolderInstall}; Components: Tools\termite; BeforeInstall: BackupIFExist
;------------------------------------------------------------------------------
Source: "..\drivers\usbtinyisp_libusb-win32_1.2.1.0\*"; DestDir: "{app}\drivers\usbtinyisp_libusb-win32_1.2.1.0"; Flags: {#FolderInstall}; Components: Drivers\USBTinyISP; BeforeInstall: BackupIFExist

;------------------------------------------------------------------------------
[Components]
;------------------------------------------------------------------------------
Name: "Hardware"; Description: "{cm:hardware}"; Types: {#Types}
Name: "Hardware\attiny"; Description: "ATtiny 44/45/84/85"; Types: {#Types}
Name: "Hardware\breadboard"; Description: "ATmega328p @ 8Mhz"; Types: {#Types}
Name: "Hardware\sanguino"; Description: "ATmega644/ATmega1284"; Types: {#Types}
;------------------------------------------------------------------------------
Name: "Libs"; Description: "{cm:libs}"; Types: {#Types}
Name: "Libs\ADCLib"; Description: "ADCLib"; Types: {#Types}
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
Name: "Libs\RGBLedLib"; Description: "RGBLedLib"; Types: {#Types}
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
Name: "Drivers"; Description: "{cm:drivers}"; Types: {#Types}
Name: "Drivers\USBTinyISP"; Description: "USBTinyISP"; Types: {#Types}


;------------------------------------------------------------------------------
[CustomMessages]
;------------------------------------------------------------------------------
hungarian.tools=Eszközök
hungarian.libs=Könyvtárak
hungarian.references=Referencia lábkiosztások
hungarian.hardware=Hardver támogatás
hungarian.ardupath=Válaszd ki az Arduino telepítési mappádat.
hungarian.drivers=Illesztõprogramok
;------------------------------------------------------------------------------
english.hardware=Hardware support
english.libs=Libraries
english.references=Reference pinouts
english.tools=Tools
english.ardupath=Please Select directory, whre arduino.exe is located
english.drivers=Drivers

;------------------------------------------------------------------------------
[Icons]
;------------------------------------------------------------------------------
Name: "{group}\Arduino with Extensions"; Filename: "{app}\arduino.exe"
Name: "{group}\Readme"; Filename: "notepad.exe"; Parameters: "{app}\readme.md"
Name: "{group}\UnInstall"; Filename: "{uninstallexe}"
Name: "{group}\Termite"; Filename: "{app}\bin-tools\termite\Termite.exe"; Components: Tools\termite
Name: "{group}\Controller Pinouts"; Filename: "{app}\reference\extensions\pinout-controller.html"; Components: References
Name: "{group}\Board Pinouts"; Filename: "{app}\reference\extensions\pinout-boards.html"; Components: References

;------------------------------------------------------------------------------
[Code]
//-----------------------------------------------------------------------------
procedure OnDirEditChange(Sender: TObject);
begin
	if FileExists(AddBackslash(WizardDirValue) + 'Arduino.exe') then
		WizardForm.NextButton.Enabled := True
	else begin
		MsgBox(CustomMessage('ardupath'), mbInformation, MB_OK);
		WizardForm.NextButton.Enabled := False;
	end;
end;

procedure CurPageChanged(CurPageID: Integer);
var
	File: string;
	i: integer;
  XML: string;
begin
	if CurPageID = wpSelectDir then
	begin
		WizardForm.DirEdit.OnChange := @OnDirEditChange;
		OnDirEditChange(nil);
	end;
end;

procedure CurUninstallStepChanged(CurUninstallStep: TUninstallStep);
var ResultCode: Integer;  
begin
    if CurUninstallStep = usPostUninstall then
    begin
        // Do your uninstall time code here
        Exec('cmd.exe', ExpandConstant('/c copy /y "{app}\.backup\*.*" "{app}\*.*"'), '', SW_SHOW, ewWaitUntilTerminated, ResultCode);
        //MsgBox(ExpandConstant('/c copy /y "{app}\.backup\*.*" "{app}\*.*"'), mbInformation, MB_OK);
        Exec('cmd.exe', ExpandConstant('/c echo Y | rmdir /s {app}\.backup'), '', SW_SHOW, ewWaitUntilTerminated, ResultCode);
        //MsgBox(ExpandConstant('/c echo Y | rmdir /s {app}\.backup'), mbInformation, MB_OK);
    end;
end;

procedure Explode(var Dest: TArrayOfString; Text: String; Separator: String);
var i, p: Integer;
begin
  i := 0;
  repeat
    SetArrayLength(Dest, i+1);
    p := Pos(Separator,Text);
    if p > 0 then begin
      Dest[i] := Copy(Text, 1, p-1);
      Text := Copy(Text, p + Length(Separator), Length(Text));
      i := i + 1;
    end else begin
      Dest[i] := Text;
      Text := '';
    end;
  until Length(Text)=0;
end;


procedure CopyPath(Source: string; Target: string);
  var strArray: TArrayOfString;
  var Dir: string;
  var i: integer;
begin
  Explode(strArray, Target, '\');
  Dir := strArray[0];
  for i:=1 to GetArrayLength(strArray)-1 do begin
    if (DirExists(Dir) = false) then CreateDir(Dir);
    FileCopy(Source, Target, False);
    Dir := Dir +'\'+ strArray[i];
  end;
end;

procedure BackupIFExist();
  var F: string;
  var dstpath: string;
  var Backupdir: string;
  var ResultCode: Integer;
begin
  F := ExpandConstant(CurrentFileName); 
  if (FileExists(F)) then begin
    BackupDir := ExpandConstant('{app}\.backup');
    if (DirExists(BackupDir) = false) then CreateDir(BackupDir);
    dstpath := CurrentFileName;
    StringChangeEx(dstpath, '{app}', '{app}\.backup', true);
    CopyPath(F, ExpandConstant(dstpath));
  end;
end;
