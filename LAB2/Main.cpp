#include "Number.cpp"

int main(){


   //create object with int type
   Number<int> numberInt(7);
   
   //create object with double type
   Number<double> numberDouble(7.7);

   cout<<"int Number = "<<numberInt.GetNum()<<endl;
    cout<<"double Number = "<<numberDouble.GetNum()<<endl;


    return 0;


}