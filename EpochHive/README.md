# EpochHive
Epoch Hive for Epoch 1.0.7

*Supporting by Default:*
- [Epoch](https://epochmod.com/a2dayzepoch.php)
- [Multicharacter](https://epochmod.com/forum/topic/4944-release-multiple-character-support-now-compatible-with-epoch-1051/) - 	NOT TESTED
- [VirtualGarage](https://github.com/oiad/virtualGarage) - NOT TESTED

Epoch Hive was built upon the .NET Framework (ver. 4.7.2)

## Build Instructions
- Open the downloaded Solution File (EpochHive.sln)
- Navigate to  "Project" >> "Manage NuGet Packages"  and click "Restore"
- Restart Visual Studio and reopen the EpochHive.sln
- Make Sure the Build Platform Target is set to "x86"
- Build (CTRL + B or "Build" >> "Build EpochHive) 

## Usages
*Epoch Hive Should only be used with DayZ Epoch*  

### Using prebuilt EpochHive
Copy: EpochHive.dll,MySql.Data.dll,Newtonsoft.Json.dll,BouncyCastle.Crypto.dll,Google.Protobuf.dll,Renci.SshNet.dll  
To your root Server Install Directory  
Copy the hiveCfg.json file to your Server Config Directory and edit the config file to suit your needs and Database Login


### Using Source
After building EpochHive (see above), you will need to navigate to "...\bin\Debug\" and copy all DLL files to your root Server Install Directory.  
Next, create a new file in your Server Config Directory called "hiveCfg.json"  
Add the following JSON text to the file:
```json
{
	"Host":"localhost",
	"Password":"",
	"Schema":"dayz_epoch",
	"User":"root",
	"LogLevel":"debug",
	"Time":"static",
	"Hour":11,
	"Instance":11,
	"CustomMethods":
	[
	]
}
```  

This is EpochHive's Config File - the file that EpochHive will read from when it is called  
- Host: Host Address of the Database you are connecting to (localhost for local machine)
- User: Database User for EpochHive to connect with
- Password: Password of Database User
- Schema: Database Schema to read/write data (dayz_epoch is the default schema for epoch)
- Instance: InstanceID for you Server (11 is for Chernarus)
- Time: Time Setting. "local" for Local Server System Time, "static" for Static Time as defined below
- Hour: Hour to return if Time is set to "static" - not used if Time is set to "local"
- LogLevel: If "debug", then EpochHive will log every action. if left emtpy ("")  EpochHive will only log Critical Errors
- CustomMethods: This is where the user can define custom Methods for EpochHive to call. See Below on how to configure!

### Configuring Custom Methods
A custom method will have these 3 defined attributes:
- MethodName: Name of the Custom Method, used in SQF callExtension in place of the child method ```("CHILD:methodNameHere:param1:param2..")```
- SqlString: SQL String with SQF-like format keys ```(select ObjectUID from object_data where ObjectID = '%1')```
- ReturnTypes: Array of strings defining what types the call should return - this helps when returning SQF strings- example in "PreBuilt" folder provided in the download  

If only a single value (IE only one Database column) is being read, EpochHive will return that single value as is like so ```["Pass",valuehere]```  
If multiple values (IE more than one Database column) are being read, EpochHive will return them in an SQF array like so ```["Pass",[value1,value2,value3,...]]```  
If Mulitple Database rows are being read, EpochHive will return a Multi-Dimensional SQF array like so  
```["PASS",[[value1,value2],[value3,value4]]]```  
NOTE: As limited to by callExtension, EpochHive will only return as a STRING. You can parse an SQF array out of the return string:  
```
_return = "EpochHive" callExtension "CHILD:childhere:param1..";
_array = call compile str formatText["%1", _return];
```   
Where ```_array``` is now your SQF array.
  
EpochHive will log to a file called "EpochHiveLOG.txt" located in your root Server Install Directory   
  
### Dependencies
- [.NET Framework version 4.7.2](https://dotnet.microsoft.com/download/thank-you/net472)

### NuGet Packages
- [Newtonsoft.Json - James Newton-King](https://www.newtonsoft.com/json)
- [UnmanagedExports - Robert Giesecke](https://sites.google.com/site/robertgiesecke/Home/uploads/unmanagedexports)
- [MySql.Data - Oracle](https://dev.mysql.com/downloads/)
- [Google.Protobuf](https://github.com/protocolbuffers/protobuf)
- [BouncyCastle](http://www.bouncycastle.org/csharp/)
- [SSH.NET](https://github.com/sshnet/SSH.NET/)
