#include<iostream>
using namespace std;


int main (){
    int age = 20; //  you pass the value 12
    int car = 12;

    if(age>=18 && car >=1){
        cout<< "License milaga1"<< endl;  // both condtion must be  true 
    }
    if(age>= 18 || car >=0){
        cout<<"license milaga2"<<endl; // one condition must be  true
    }
    cout<< !age <<endl; // this is flip
   
   return 0;
}