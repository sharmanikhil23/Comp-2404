result:	main.o Student.o Person.o
	g++ -o result main.o Student.o Person.o

main.o:	main.cc
	g++ -c main.cc

Student.o: Student.cc Student.h
	g++ -c Student.cc

Person.o: Person.cc Person.h
	g++ -c Person.cc

clean:	
	rm *.o result