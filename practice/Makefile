result:	Animal.o Main.o DanceBehaviour.o
	g++ -o result ./Animal.o ./Main.o ./DanceBehaviour.o

Main.o:	Main.cc
	g++ -c Main.cc

Animal.o: Animal.cc Animal.h DanceBehaviour.h
	g++ -c Animal.cc

DanceBehaviour.o: DanceBehaviour.cc DanceBehaviour.h
	g++ -c DanceBehaviour.cc

clean:
	rm ./result ./*.o