/* C++ program to implementation
 Function Pointer
 C++ allows operations 
 with pointers to functions. 
 The typical use of this is 
 for passing
a function as an argument to 
another function. Pointers to functions are declared with
the same syntax as 
a regular function 
declaration, except 
that the name of the function
is enclosed between 
parentheses () and an
 asterisk (*) is inserted before the name.
Similar to the pointer
 used with variables
 // Declaring
return_type (*FuncPtr) (parameter type, ....);
// Referencing
FuncPtr = functon_name;
// Dereferencing
data_type x = *FuncPtr;*/

#include<iostream>
using namespace std;

int multiply(int a, int b){
	return a * b;
}
 