result:	Book.o Main.o BookArray.o BookLib.o IdArray.o User.o
	g++ -o result Book.o Main.o BookLib.o IdArray.o	User.o BookArray.o

Book.o:	Book.cc Book.h
	g++ -c Book.cc

Main.o:	Main.cc BookLib.h User.h BookLib.o User.o
	g++ -c Main.cc

BookArray.o: BookArray.h BookArray.cc
	g++ -c BookArray.cc

BookLib.o: BookLib.h BookLib.cc
	g++ -c BookLib.cc

IdArray.o: IdArray.h IdArray.cc
	g++ -c IdArray.cc

User.o: User.h User.cc
	g++ -c User.cc

clean:
	rm *.o result