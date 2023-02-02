#include <iostream>
using namespace std;
#include <string>

#include "User.h"
#include "BookLib.h"

/*
Function:   main
 Purpose:   This function is the main function of the program control all the
            functionality of the program according to the user choice
  return:   Return 0 at the end of the program
*/
int main()
{
  BookLib book;
  User users[NUM_USERS];
  int choice;
  BookLib &bookref=book;
  loadMasterLib(bookref,"Nikhil Sharma",ORDER_BY_YEAR);

  loadUsers(users,bookref);

  printMenu(choice);
  while(choice!=0){
    if(choice==1){
      book.print();
    }else if(choice==2){
      for(int i=0;i<NUM_USERS;i++){
        users[i].printBooks(book);
      }
    }
  printMenu(choice);
  }

  return 0;
}

/*
Function:   printMenu
 Purpose:   This function give options to user to choose master or user library to view
     out:   choice
*/
void printMenu(int& choice)
{
  int c = -1;
  int numOptions = 2;

  cout << endl << "MAIN MENU" << endl;
  cout << "  (1) Print master library" << endl;
  cout << "  (2) Print user libraries" << endl;
  cout << "  (0) Exit" << endl << endl;

  cout << "Please enter your selection: ";
  cin  >> c;

  if (c == 0) {
    choice = c;
    return;
  }

  while (c < 0 || c > numOptions) {
    cout << "Please enter your selection: ";
    cin  >> c;
  }

  choice = c;
}
/*
Function:   loadMasterLib
 Purpose:   This function is used to set the name and the order in which user want to add all the books and
            add all the books in the master library
     out:   lib
      in:   name, order
*/
void loadMasterLib(BookLib& lib, string name, OrderType order)
{
  int bookId = 1001;

  lib.setLibInfo(name, order);

  lib.add(bookId++, "Ender's Game", "Orson", "Scott Card", 1985);
  lib.add(bookId++, "Dune", "Frank", "Herbert", 1965);
  lib.add(bookId++, "Dune Messiah", "Frank", "Herbert", 1969);
  lib.add(bookId++, "Foundation", "Isaac", "Asimov", 1951);
  lib.add(bookId++, "Foundation and Empire", "Isaac", "Asimov", 1952);
  lib.add(bookId++, "The End of Eternity", "Isaac", "Asimov", 1955);
  lib.add(bookId++, "Hitch Hiker's Guide to the Galaxy", "Douglas", "Adams", 1979);
  lib.add(bookId++, "1984", "George", "Orwell", 1949);
  lib.add(bookId++, "Farenheit 451", "Ray", "Bradbury", 1954);
  lib.add(bookId++, "2001:  A Space Odyssey", "Arthur C.", "Clarke", 1968);
  lib.add(bookId++, "Do Androids Dream of Electric Sheep?", "Philip K.", "Dick", 1968);
  lib.add(bookId++, "Neuromancer", "William", "Gibson", 1984);
  lib.add(bookId++, "A Fire Upon the Deep", "Vernor", "Vinge", 1992);
  lib.add(bookId++, "Hyperion", "Dan", "Simmons", 1989);
  lib.add(bookId++, "The Fall of Hyperion", "Dan", "Simmons", 1990);
  lib.add(bookId++, "Lord of the Flies", "William", "Golding", 1954);
  lib.add(bookId++, "Rebecca", "Daphne", "du Maurier", 1938);
  lib.add(bookId++, "Kidnapped", "Robert Louis", "Stevenson", 1886);
  lib.add(bookId++, "Treasure Island", "Robert Louis", "Stevenson", 1883);
  lib.add(bookId++, "Charlotte's Web", "E.B.", "White", 1952);
  lib.add(bookId++, "To Kill a Mockingbird", "Harper", "Lee", 1960);
  lib.add(bookId++, "The Lion, the Witch and the Wardrobe", "C.S.", "Lewis", 1950);
  lib.add(bookId++, "Never Let Me Go", "Kazuo", "Ishiguro", 2005);
  lib.add(bookId++, "Jane Eyre", "Charlotte", "Bronte", 1847);
  lib.add(bookId++, "Flowers for Algernon", "Daniel", "Keyes", 1966);
  lib.add(bookId++, "Lost Horizon", "James", "Hilton", 1933);
  lib.add(bookId++, "The Count of Monte Cristo", "Alexandre", "Dumas", 1844);

  lib.add(bookId++, "Starlight", "Richard", "Wagamese", 2018);
  lib.add(bookId++, "The Shell Seekers", "Rosamunde", "Pilcher", 1987);
  lib.add(bookId++, "The Snow Walker", "Farley", "Mowat", 1977);
  lib.add(bookId++, "The Fionavar Tapestry", "Guy Gavriel", "Kay", 1984);
  lib.add(bookId++, "Still Life", "Louise", "Penny", 2005);
  lib.add(bookId++, "Evangeline, A Tale of Acadie", "Henry Wadsworth", "Longfellow", 1847);
  lib.add(bookId++, "Murder on the Orient Express", "Agatha", "Christie", 1934);
  lib.add(bookId++, "All Our Wrong Todays", "Elan", "Mastai", 2017);
  lib.add(bookId++, "The Girl on the Train", "Paula", "Hawkins", 2015);
  lib.add(bookId++, "Beauty", "Sheri S.", "Tepper", 1991);
  lib.add(bookId++, "The Midnight Library", "Matt", "Haig", 2020);
  lib.add(bookId++, "Tigana", "Guy Gavriel", "Kay", 1990);
  lib.add(bookId++, "Morning in the Burned House", "Margaret", "Atwood", 1995);
  lib.add(bookId++, "The Seven Deaths of Evelyn Hardcastle", "Stuard", "Turton", 2018);
}

/*
Function:   loadUsers
 Purpose:   This function is used add user in the user Array and add the books in their collection
            according to order they choose.
     out:   users
      in:   master
*/
void loadUsers(User* users, BookLib& master)
{
  users[0].setUserInfo("Calvin", ORDER_BY_AUTHOR);
  users[1].setUserInfo("Hobbes", ORDER_BY_AUTHOR);
  users[2].setUserInfo("Susie",  ORDER_BY_AUTHOR);

  users[0].addBook(1001, master);
  users[0].addBook(1002, master);
  users[0].addBook(1003, master);
  users[0].addBook(1004, master);
  users[0].addBook(1005, master);
  users[0].addBook(1006, master);
  users[0].addBook(1007, master);
  users[0].addBook(1008, master);
  users[0].addBook(1009, master);
  users[0].addBook(1010, master);
  users[0].addBook(1011, master);
  users[0].addBook(1012, master);
  users[0].addBook(1013, master);
  users[0].addBook(1014, master);
  users[0].addBook(1015, master);

  users[1].addBook(1016, master);
  users[1].addBook(1017, master);
  users[1].addBook(1018, master);
  users[1].addBook(1019, master);
  users[1].addBook(1020, master);
  users[1].addBook(1021, master);
  users[1].addBook(1022, master);
  users[1].addBook(1023, master);
  users[1].addBook(1024, master);
  users[1].addBook(1025, master);
  users[1].addBook(1026, master);
  users[1].addBook(1027, master);

  users[2].addBook(1028, master);
  users[2].addBook(1029, master);
  users[2].addBook(1030, master);
  users[2].addBook(1031, master);
  users[2].addBook(1032, master);
  users[2].addBook(1033, master);
  users[2].addBook(1034, master);
  users[2].addBook(1035, master);
  users[2].addBook(1036, master);
  users[2].addBook(1037, master);
  users[2].addBook(1038, master);
  users[2].addBook(1039, master);
  users[2].addBook(1040, master);
  users[2].addBook(1041, master);
}
