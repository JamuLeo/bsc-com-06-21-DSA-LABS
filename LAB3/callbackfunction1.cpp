// The below program demonstrate the use of void function to
// pass void pointer as parameter in callback function.
#include <iostream>
using namespace std;
// Callback function definition
void CallbackFunction(void* data, char dataType)
{
switch (dataType) {
case 'i':
cout << "Callback for integer: " << *(int*)data << endl;
break;
case 'd':
cout << "Callback for double: " << *(double*)data << endl;
break;
default:
cout << "Unsupported data type in callback!" << endl;
}
}
// Function that takes a callback
void PerformOperation(void* data, char dataType,
void (*callback)(void*, char))
{
// Call the callback function
callback(data, dataType);
}
int main()
{
int intValue = 07;
double doubleValue = 8.12;
// Perform operation with integer and callback
PerformOperation(&intValue, 'i', CallbackFunction);
// Perform operation with double and callback
PerformOperation(&doubleValue, 'd', CallbackFunction);
return 0;
}