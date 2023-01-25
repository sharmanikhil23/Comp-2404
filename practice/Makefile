result:	first.o student.o
	g++ -o result first.o student.o

first.o:	first.cc
	g++ -c first.cc

student.o:	student.cc
	g++ -c student.cc

clean:	
	rm *.o result