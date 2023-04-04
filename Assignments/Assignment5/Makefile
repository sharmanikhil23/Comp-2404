result: Appt.o Control.o Date.o Main.o Schedule.o Time.o View.o Identifiable.o Customer.o Clinic.o  Animal.o Collection.o IdArray.o IdList.o
	g++ -o result Animal.o Appt.o Control.o Date.o Main.o Schedule.o Time.o View.o Identifiable.o Customer.o Clinic.o Collection.o IdArray.o IdList.o

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

Identifiable.o: Identifiable.cc Identifiable.h
	g++ -c Identifiable.cc

Customer.o: Customer.cc Customer.h Identifiable.cc Identifiable.h
	g++ -c Customer.cc

Clinic.o: Clinic.cc Clinic.h
	g++ -c Clinic.cc

Collection.o: Collection.cc Collection.h
	g++ -c Collection.cc

IdArray.o: IdArray.cc IdArray.h Collection.cc Collection.h
	g++ -c IdArray.cc

IdList.o: IdList.cc IdList.h Collection.cc Collection.h
	g++ -c IdList.cc

clean:	
	rm -r ./*.o result