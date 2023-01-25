#include "defs.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int arr[MAX_ARR_SIZE];
    srand((unsigned) time(NULL));
    initArray(arr);
    printArray(arr);
    for(int i=0;i<MAX_ARR_SIZE;i++){
        int &temp=*(arr+i);
        doubleNum(temp);
    }
    cout<<endl;
    printArray(arr);
}

void printArray(int* arr){
    for(int i=0;i<MAX_ARR_SIZE;i++){
        cout<<arr[i]<<+" ";
        
    }
}