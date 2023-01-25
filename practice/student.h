 #ifndef Student_H
// #include <string>
// #include <iostream>
using namespace std;

class Student{

    private:
    string number;
    string name;

    public:
    Student();
    Student(string s1, string s2);
    string getName();
    void setName(string n);
    void print();
    
};

 #endif