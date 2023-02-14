#ifndef PATRON_H
#define PATRON_H

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
