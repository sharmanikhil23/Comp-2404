mid:	main.o Stack.o Runner.o
	g++ -o mid main.o Stack.o Runner.o

main.o:	main.cc 
	g++ -c main.cc

Stack.o:	Stack.cc 
	g++ -c Stack.cc


Runner.o:	Runner.cc 
	g++ -c Runner.cc
clean:
	rm -f *.o mid
