/*
c++ Program to demonstrate the use of different data
to hold the address of any type-castable type-castable
In the below Code, We declared a void pointer as the variable name “ptr” which acts
as a generic pointer or void pointer. This pointer stores multiple datatype addresses
like int, char and ﬂoat. We Typecasted the void pointer to any data type (ﬂoat, char, int).
Hence Void Pointer allows us to change the addresses for different memory
addresses of different data types.*/

#include<iostream>
using namespace std;

int main(){
	
	//initialiazing multiple variables of different data
	//type
	
	int n = 10;
	float f= 25.25;
	char c = '$';
	
	//initializing a void pointer or generic pointr
	//storing multiple data type addresses
	void* ptr;
	
	ptr = &n; //pointing to int
	cout<<"The value of n "<<n<<endl;
	cout<<"The Address of n "<<ptr<<endl;
	
	ptr = &f; //pointing to float
	cout<<"The value of f "<<f<<endl;
	cout<<"The Address of f "<<ptr<<endl;
	
	ptr = &c; //pointing to char
	cout<<"The value of c "<<c<<endl;
	cout<<"The Address of c "<<ptr<<endl;
	
	
	return 0;
}