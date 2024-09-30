/*
Name: Leo Jamu
Program: program demonstrating 
class template declaration where its definition
must be in the same header files to avoid 
linker errors */
#pragma once
#include <iostream>
using namespace std;

template <class T>
class Mypair{

    T a;
    T b;

    public:
    Mypair(T first,T second){

        a = first;
        b = second;
    }

    T GetMax();
};// end of Mypair class template declaration

//Mypair class template definition starts here


GetMax member template function definition
template<class T>
T Mypair<T>::GetMax(){

//local variable
  T retval;
  retval = (a > b) ? a : b;

return retval;

}