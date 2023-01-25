#include "defs.h"
#include <iostream>
using namespace std;

void initArray(int* arr){
    for(int i=0;i<MAX_ARR_SIZE;i++){
        int temp=random(199);
        *(arr+i)=temp;   
    }
}