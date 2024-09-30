#pragma once
#include<iostream>
using namespace std;

//class template
template<class T>
class Number{

  private:

  //variable of type T
  T Num;

  public:
     Number(T n);

     T GetNum();

};//Number class template declaration ends here

//Number class template definition starts here


//class template 
template <class T>

Number<T>::Number(T n){
    Num = n;
}

template<class T>
T Number<T>::GetNum(){
    return Num;
} 