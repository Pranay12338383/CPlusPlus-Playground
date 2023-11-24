#include <iostream>

using namespace std;

int main(){

int a = 45;
cout<<"The value of a was " <<a<<endl;

a = 33;
cout<<"The value of a was " <<a<<endl;
 
 //In above we can see that value of a is not same everywhere , so we use constants such that a have 
 //same value everywhere 



//******************* constants in C++******************


 const int a = 45;
 cout<<"The value of a was " <<a<<endl;

 a = 33;// Here you can see that an error occur because 'a' is already been defined you can not change it 
 cout<<"The value of a is " <<a<<endl;
    return 0;
    

    
 


}