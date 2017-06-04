g++ random_seats_generator.cpp -o random_seats_generator.exe -g3
random_seats_generator.exe < namelist.txt > seats.csv
@echo off
echo -----------
echo Seats generation succeeded!
pause
