@REM *** PARAMETERS/VARIABLES ***
SET BackupDir="[Where you want to save the backups]"
SET mysqldir="C:\Program Files\MySQL\MySQL Server 5.6\bin"
SET mysqlschema=[Your DB schema name]
SET mysqlpassword=[your DB password]
SET mysqluser=[your DB user login]
SET housekeepafter=5

For /f "tokens=2-4 delims=/ " %%a in ('date /t') do (set mydate=%%c-%%a-%%b)
For /f "tokens=1-2 delims=/:" %%a in ("%TIME%") do (set mytime=%%a.%%b)

set hour=%time:~0,2%
if "%time:~0,1%"==" " set hour=0%time:~1,1%
set datestamp=%date:~10,4%-%date:~4,2%-%date:~7,2%_%hour%%time:~3,2%

@REM *** EXECUTION ***
@REM Change to mysqldir
c:
cd %mysqldir%

@REM dump/backup ALL database, this is all in one line
mysqldump -u %mysqluser% -p%mysqlpassword% --databases %mysqlschema% --routines --events --triggers --quick  >%BackupDir%\%mysqlschema%_backup.%datestamp%.sql

@REM - Housekeeping
forfiles -p %BackupDir% -s -m *.sql -d -%housekeepafter% -c "cmd /c del @path"

