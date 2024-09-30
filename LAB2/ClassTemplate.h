/*
Program:Leo Jamu
class declared as template its 
definition must be contained in the same header 
files*/
#pragma once
#include <string>

//class template with multiple and default parameters

template<class T, class U, class V = char>
class ClassTemplate{

private:

T var1;
U var2;
V var3;

public:
classTemplate(T v1,U v2,V v3);
 void PrintVar();

}; //end of class template declaration


//our Class Template definition starts here
template <class T,class U,class V>
ClassTemplate<T,U,V> :: ClassTemplate(T v1,U v2,V v3){

  var1 = v1;
  var2 = v2;
  var3 = v3;


}


//PrintVar member template  function definition
template <class T,class U,class V>
void ClassTemplate<T,U,V>::PrintVar(){
cout<<"var1 = "<<var1<<endl;
cout<<"var2 = "<<var2<<endl;
cout<<"var3 = "<<var3<<endl;
}
