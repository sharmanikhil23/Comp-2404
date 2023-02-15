#ifndef PATRON_H
#define PATRON_H

/*
 Class  :   Patron
 Purpose:   This class will help us to make the  instance of the patrons 

Critical attributes:
nextID  :   It is static variable which help the user to get the new patron id everytime new Patron is added  
*/

class Patron
{
    public:
        Patron(string ="unknown");
        void print();
        int getId();
        string getName();

    private:
        string name;
        int id;
        static int nextId;
  
};

#endif
