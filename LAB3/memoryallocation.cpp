/*// C++ program to demonstrate the use of void pointer to
// dynamically allocate memory
 for any data type.
 
Void pointers can be used to allocate memory for any data type. In C++, “new” keyword
is used for dynamic memory 
allocation which returns a 
pointer to the allocated
memory. After allocating memory,
 We need perform type casting to
 use the allocated
memory with a specifc data type*/

#include<iostream>
using namespace std;

int main(){
	
	//Allocate memory for an integer using new
	void* voidPtr = new int;
	
	// Type casting the void pointer to int* for usage
	
    int* intPtr = static_cast<int*>(voidPtr);
	// Assign a value to the allocated memory
    *intPtr = 42;
	// Print the value from the allocated memory
    cout << "Value from allocated memory: " << *intPtr << endl;
	
	// Deallocate the memory
    delete intPtr;
	
	
	return 0;
}