@REM *** PARAMETERS/VARIABLES ***
SET BackupDir="[Where you want to save the backups]"
SET mysqldir="C:\Program Files\MySQL\MySQL Server 5.6\bin"
SET mysqlschema=[Your DB schema name]
SET mysqlpassword=[your DB password]
SET mysqluser=[your DB user login]
SET housekeepafter=5
SET datestamp=%date:~-10,2%-%date:~-7,2%-%date:~-4,4%_%time:~0,2%.%time:~3,2%.%time:~6,2%
@REM *** EXECUTION ***
@REM Change to mysqldir
c:
cd %mysqldir%

@REM dump/backup ALL database, this is all in one line
mysqldump -u %mysqluser% -p%mysqlpassword% --databases %mysqlschema% >%BackupDir%\%mysqlschema%_backup.%datestamp%.sql

@REM - Housekeeping
forfiles -p %BackupDir% -s -m *.sql -d -%housekeepafter% -c "cmd /c del @path"
