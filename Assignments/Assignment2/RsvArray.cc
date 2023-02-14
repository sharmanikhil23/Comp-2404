#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "RsvArray.h"

RsvArray::RsvArray(int c){
    capacity=c;
    res=new Reservation*[capacity];
    size=0;
}

RsvArray::~RsvArray(){
    for(int i=0;i<size;i++){
        delete res[i];
    }

    delete []res;
}

void RsvArray::add(Reservation* r){

    bool flag=false;

    if(size+1>capacity){
        cout<<"We Cannot be able to add any more Books";
        return;
    }

     int indexToInsert=0;

     for(int i=0;i<size;i++){

        if(r->lessThan(res[i]) == true){
            indexToInsert=i;
            flag=true;
            break;
        }
     }
     if(flag==true){
        for(int i=size;i>indexToInsert;i--){
            res[i]=res[i-1];
        }
      res[indexToInsert]=r;
     }else{
        res[size]=r;
     }
     size++;
}
int RsvArray::getSize(){
    return size;
}

Reservation* RsvArray::get(int index){
    if(index<0 || index>=size){
        return NULL;
    }else{
        return res[index];
    }
}

void RsvArray::print(){
    for(int i=0;i<size;i++){
        res[i]->print();
    }
}