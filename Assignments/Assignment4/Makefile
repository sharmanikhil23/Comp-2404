assignment4:	Control.o View.o Main.o Identifiable.o Collection.o IdArray.o IdList.o Customer.o Animal.o Clinic.o
	g++ -o assignment4 Control.o View.o Main.o Identifiable.o Collection.o IdArray.o IdList.o Customer.o Animal.o Clinic.o

Control.o: Control.cc Control.h
	g++ -c Control.cc

View.o: View.cc View.h
	g++ -c View.cc

Main.o: Main.cc
	g++ -c Main.cc

Identifiable.o: Identifiable.cc Identifiable.h
	g++ -c Identifiable.cc

Collection.o: Collection.cc Collection.h
	g++ -c Collection.cc

IdArray.o: IdArray.cc IdArray.h Collection.cc Collection.h
	g++ -c IdArray.cc

IdList.o: IdList.cc IdList.h Collection.cc Collection.h
	g++ -c IdList.cc

Customer.o: Customer.cc Customer.h Identifiable.cc Identifiable.h
	g++ -c Customer.cc

Animal.o: Animal.cc Animal.h Identifiable.cc Identifiable.h
	g++ -c Animal.cc

Clinic.o: Clinic.cc Clinic.h
	g++ -c Clinic.cc

clean:	
	rm *.o assignment4