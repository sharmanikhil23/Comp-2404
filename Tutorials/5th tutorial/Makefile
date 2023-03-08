result:	main.o Farm.o Animal.o List.o
	g++ -o result main.o Farm.o Animal.o List.o

main.o:	main.cc
	g++ -c main.cc

Farm.o:	Farm.cc Farm.h
	g++ -c Farm.cc

Animal.o:	Animal.cc Animal.h
	g++ -c Animal.cc

List.o:	List.cc List.h
	g++ -c List.cc

clean:	
	rm *.o result