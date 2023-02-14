#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Restaurant.h"

Restaurant::Restaurant(string n){
    name=n;
}

Restaurant::~Restaurant(){
    
}

void Restaurant::addPatron(Patron* p){
    patrons.add(p);
}

void Restaurant::reserveTable(int patronId,int tableNum, int year, int month,int d,int hour,int min){
    Patron *temp;
    if(patrons.find(patronId,&temp)==false){
        cout<<"Patron Id "<<patronId<<" not in the record"<<endl;
        return;
    }else if(Date::validate(d,month,year)==false){
        cout<<" The is issue with date, month, year provided"<<endl;
        return;
    }else if(Time::validate(hour,min)==false){
        cout<<" The is issue with hours and min provided"<<endl;
        return;
    }else{
        rsv.add(new Reservation(new Date(d,month,year),new Time(hour,min),temp,tableNum));
    }
}

void Restaurant::printReservations(){

    cout<<"ALL RESERVATIONS AT "<<name<<" :"<<endl;
    rsv.print();
}

void Restaurant::printPatrons(){
  patrons.print();
}

void Restaurant::printSchedule(int year,int month,int day){
    if(Date::validate(day,month,year)==false){
        cout<<"Invalid day month year"<<cout;
        return;
    }else{
        Date temp(day,month,year);
        Date *temp1=&temp;
        cout<<endl;
        cout<<"RESERVATIONS FOR  ";
        temp.print(); 
        cout<< " at "<< name <<" : "<< endl;
        cout<<endl;
        for(int i=0;i<rsv.getSize();i++){
            if(rsv.get(i)->matchDate(temp1)){
                rsv.get(i)->print();
            }
        }
    }
}