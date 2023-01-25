#include <iostream>
using namespace std;

void getData(int*);
void getDataRef(int&);

#include "student.h"

int main(){
    Student dil("10101101","Dilpreet");
    Student nikhil;
    dil.print();
    nikhil.print();
    // int num;

    // int *numPtr=&num;
    // getData(numPtr);
    // cout<<num<<endl;
    // int &numRef=num;

    // cout<<numRef<<endl;
    // getDataRef(numRef);
    // cout<<num<<endl;
}

void getData(int *data){
     cout<<"Enter the number"<<endl;
     cin>> *data;
}

void getDataRef(int &data){
    cout<<"Enter the Data"<<endl;
    cin>>data;
}