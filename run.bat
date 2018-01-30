type namelist.txt | random_seats_generator.exe > seats.csv
SET excel="%ProgramFiles%\Microsoft Office\OFFICE11\EXCEL.exe"
IF EXIST %EXCEL% (
start %excel% seats.csv
) ELSE (
echo Excel not found!
pause
)
