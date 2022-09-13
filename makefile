ObjectHorse: Horse.o Race.o Main.o
	g++ Horse.o Race.o Main.o -o ObjectHorse
Horse.o: Horse.cpp Header.h
	g++ -c Horse.cpp
Race.o: Race.cpp Header.h
	g++ -c Race.cpp
Main.o: Main.cpp Header.h
	g++ -c Main.cpp
clean:
	rm -f *.o
	rm ObjectHorse
run: ObjectHorse
	./ObjectHorse
