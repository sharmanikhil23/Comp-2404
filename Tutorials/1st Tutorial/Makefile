t01:	./main.o ./random.o ./process.o ./init.o
	g++ -o t01 main.o random.o process.o ./init.o	

main.o:	main.cc 
	g++ -c main.cc

random.o:	random.cc
	g++ -c random.cc

process.o:	process.cc
	g++ -c process.cc

init.o:	init.o
	g++ -c init.cc

clean:
	rm -f *.o t01
