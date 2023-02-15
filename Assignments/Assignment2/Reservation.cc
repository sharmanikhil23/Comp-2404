#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

#include "Reservation.h"

Reservation::Reservation(Date *d,Time *tm, Patron *p ,int t){
    table=t;
    date=d;
    time=tm;
    patron=p;
}

Reservation::~Reservation(){
    delete date;
    delete time;
}

bool Reservation::lessThan(Reservation *r){

    if(date->lessThan(r->date)==true){
        return true;
    }else{
        if(date->equals(r->date)){
            if(time->lessThan(r->time)==true){
            return true;
        }else{
            return false;
        }
        }
        return false;
    }
}

bool Reservation::matchDate(Date* d){
    if(date->equals(d)){
        return true;
    }else{
        return false;
    }
}
void Reservation::print(){
    date->print();
    cout<<" @ ";
    (time->print());
    cout<<" :: "<<"Table  "<<setw(2)<<table<<"  "<< (patron->getName())<<endl;
}

