result:	Chicken.o Animal.o List.o AgCoop.o Main.o Control.o Cow.o Pig.o
	g++ -o result Chicken.o Animal.o List.o AgCoop.o Main.o Control.o Cow.o Pig.o

Chicken.o: Chicken.h Chicken.cc Animal.o
	g++ -c Chicken.cc

Animal.o: Animal.h Animal.cc
	g++ -c Animal.cc

AgCoop.o: AgCoop.h AgCoop.cc
	g++ -c AgCoop.cc

Main.o: Main.cc
	g++ -c Main.cc

Control.o: Control.cc Control.h
	g++ -c Control.cc

List.o: List.h List.cc
	g++ -c List.cc

Cow.o: Cow.h Cow.cc Animal.o
	g++ -c Cow.cc

Pig.o: Pig.h Pig.cc Animal.o
	g++ -c Pig.cc

clear: 	
	rm result *.o
