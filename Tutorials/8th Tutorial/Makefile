result: Main.o Logger.o CheckInLogger.o CheckOutLogger.o
	g++ -o result Main.o Logger.o CheckInLogger.o CheckOutLogger.o

Main.o: Main.cc Logger.o
	g++ -c Main.cc

Logger.o:	Logger.cc 
	g++ -c Logger.cc


CheckInLogger.o:	CheckInLogger.cc Logger.o
	g++ -c CheckInLogger.cc

CheckOutLogger.o:	CheckOutLogger.cc Logger.o
	g++ -c CheckOutLogger.cc

clean:
	rm ./result *.o