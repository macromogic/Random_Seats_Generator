.PHONY: compl exec clear

SOURCE=random_seats_generator

compl: $(SOURCE).cpp
	g++ $^ -o $(SOURCE).o -g3

exec: compl
	./$(SOURCE).o < namelist.txt > seats.csv

clear:
	rm *.o

