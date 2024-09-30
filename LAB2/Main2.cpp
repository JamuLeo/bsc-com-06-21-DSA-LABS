#include "ClassTemplate.cpp"
#include<string>
#include <iostream>


int main(){

//create object with int,double and char types
ClassTemplate<int,double> obj1(7,7.7,'c');
cout<<"obj1 values: "<<endl;
obj1.PrintVar();

//create object with int,double and bool types

ClassTemplate<double,char,bool> obj2(8.8,'a',false);
cout<<"obj2 values: "<<endl;
obj2.PrintVar();



    return 0;
}
