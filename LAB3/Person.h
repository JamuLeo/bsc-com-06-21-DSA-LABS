/*
Name: Leo Jamu
Program:demonstrating a program which does not contain 
a class as a template but containing template member functions
and does not contain  template member variables*/

#pragma once
#include <string>

class Person{
	
	//Default constructor 
	Person();
	
	//overloaded constructor
	Person(int age);
	
	template<class T, class U>
	void PrintValue(T var1, U var2);
	int GetAge();
	
	private:
	 int mAge;
	
	
}; //end of our class declaration

//within same header file,we provide PrintValue function definition

//PrintValue template member function definition within a non-template class
template<class T, class U>
void Person::PrintValue<T var1,U var2){
	
	if(mAge < 10)
		
	else
	{
		cout<<var2<<endl;
	}
}
