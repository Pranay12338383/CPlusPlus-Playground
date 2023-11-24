#include <iostream>

using namespace std;

int main(){


// What is pointer ...? data types which stores the address of other data type 

                                 
       int a = 4;
       int *b= &a;

                                          
        // &--->> address of operator 
       cout<<"The address of a is "<<b<<endl;
       cout<<"The address of a is "<<&a<<endl;                                     

         
          // *--->> Dereference operator   -->matlab mai address se value nikal raha hu 
       cout<<"The value of a  is "<<*b<<endl; 


       // Pointer to Pointer
       int **c = &b;
       cout<<"The address of b is "<<&b<<endl;
       cout<<"The address of b is "<<c<<endl;
       cout<<"The value of b is "  <<*c<<endl;
       cout<<"The value of a is "  <<**c<<endl;

return 0;

}