result: Animal.o Appt.o Control.o Date.o Main.o Schedule.o Time.o View.o
	g++ -o result Animal.o Appt.o Control.o Date.o Main.o Schedule.o Time.o View.o

Control.o:	Control.h Control.cc List.h
	g++ -c Control.cc

Time.o: Time.cc Time.h
	g++ -c Time.cc

Date.o: Date.cc Date.h
	g++ -c Date.cc

Animal.o: Animal.cc Animal.h
	g++ -c Animal.cc

Appt.o: Appt.h Appt.cc
	g++ -c Appt.cc
	
Main.o: Main.cc
	g++ -c Main.cc

Schedule.o: Schedule.cc Schedule.h List.h
	g++ -c Schedule.cc

View.o: View.cc View.h
	g++ -c View.cc

clean:	
	rm -r ./*.o result