#include <iostream>
using namespace std;

#include "MovieGroup.h"
#include "Movie.h"

MovieGroup::MovieGroup(){
    size=0;
}

MovieGroup::MovieGroup(MovieGroup &source){
    size=0;
    Movie *temp;
    for(int i=0;i<source.size;i++){
       temp=new Movie(*(source.movies[i]));
        add(temp);
    }
}


MovieGroup::~MovieGroup(){
    for(int i=0;i<size;i++){
        delete movies[i];
    }
}

void MovieGroup::add(Movie *m){

    int year=m->getYear();
    bool flag=false;

    if(size+1>MAX_SIZE){
        cout<<"We Cannot be able to add any more Books";
        return;
    }

     int indexToInsert=0;

     for(int i=0;i<size;i++){
        if(movies[i]->getYear()>year){
            indexToInsert=i;
            flag=true;
            break;
        }
     }

     if(flag==true){
        for(int i=size;i>indexToInsert;i--){
            movies[i]=movies[i-1];
            
        }

        movies[indexToInsert]=m;
     }else{
            movies[size]=m;
     }
     size++;
}

void MovieGroup::print(){
    cout<<"ALL movies :-"<<endl;
    for(int i =0;i<size;i++){
        movies[i]->print();
    }
}