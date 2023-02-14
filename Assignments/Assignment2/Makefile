assignment2:	Time.o View.o Date.o Patron.o PatronArray.o Control.o
	g++ -o assignment2 Time.o View.o Control.o Patron.o PatronArray.o Date.o

Time.o:	Time.cc Time.h
	g++ -c Time.cc

Date.o: Date.cc Date.h
	g++ -c Date.cc

Patron.o: Patron.cc Patron.h
	g++ -c Patron.cc

PatronArray.o: PatronArray.h PatronArray.cc
	g++ -c PatronArray.cc

View.o:	View.cc View.h
	g++ -c View.cc

Control.o: Control.cc Control.h
	g++ -c Control.cc

clean:	
	rm *.o assignment2
