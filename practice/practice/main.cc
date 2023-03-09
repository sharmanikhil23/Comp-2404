#include <iostream>
using namespace std;

#include "Student.h"

int main(){
   
   Student first("Nikhil",23);

    cout<<"Hello World from main"<<endl;
    cout<<" Next Student number is "<< Student::getStudentNumber() <<endl;

    first.print();

    const Student second("Dilpreet",22);
    second.print();
    return 0;
}