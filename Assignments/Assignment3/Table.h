#ifndef TABLE_H
#define TABLE_H

class Table{
    private:
        int number;
        int capacity;

    public:
        Table(int, int);
        int getTNumber();
        int getTCapacity();
};

#endif