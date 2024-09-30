/* 
Name: Leo Jamu
Program: c++ program demonstrating templates 
in classes*/

#pragma once
#include <string>

//class template with multiple and default parameters
template <class T, class U>

class ClassTemplate{
	
	//variable declaration with T and U as our return type of data
	T var1;
	U var2;
	
	string name;
	
	public:
	    //Default constructor
		ClassTemplate();
		
		//overload constructor
		ClassTemplate(T v1, U v2, string newName);
		
		T Getvar1() const;
		T Getvar2() const;
		
		string GetName();
		
}; //class declaration end 

/* ClassTemplate definition,we define our 
class within the same template if a class 
is declared as a template to avoid linker errors*/

//default constructor
template <class T, class U>
ClassTemplate<T,U>::ClassTemplate(){
	name = "";
}

//overloaded constructor
template<class T, class U>
ClassTemplate<T,U>::ClassTemplate(T v1,U v2,string newName){
	var1 = v1;
	var2 = v2;
	name = newName
}

//GetVar1 function definition
template<class T, class U>
T ClassTemplate<T,U>::GetVar1()const{
	return var1;
}

//GetVar2 function definition
template<class T, class U>
T ClassTemplate<T, U>::GetVar2() const{
	return var2;
}

//GetName function definition
template<class T,class U>
string ClassTemplate<T,U>::GetName(){
	return name;
}


