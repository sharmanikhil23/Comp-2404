result:	Time.o View.o Date.o Patron.o PatronArray.o Control.o Reservation.o RsvArray.o Restaurant.o main.o
	g++ -o result Time.o View.o Control.o Patron.o PatronArray.o Date.o Reservation.o RsvArray.o Restaurant.o main.o

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

Reservation.o: Reservation.cc Reservation.h
	g++ -c Reservation.cc

RsvArray.o: RsvArray.cc RsvArray.h
	g++ -c RsvArray.cc

Restaurant.o: Restaurant.h Restaurant.cc
	g++ -c Restaurant.cc

main.o:	main.cc
	g++ -c main.cc

clean:	
	rm *.o result
