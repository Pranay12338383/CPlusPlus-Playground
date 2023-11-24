#include <iostream>

using namespace std;
            

int sum(int a , int b); // int sum(int,int); you can also write this 
// int sum(int a , b); You can not write this 

int main(){

      int num1,num2;
      cout<<"Enter the first number ";
      cin>>num1;
      cout<<"Enter the second number a";
      cin>>num2;
     // num1 and num2 are actual parameter
      cout<<"Sum is " <<sum(num1,num2);   

return 0;
}


int sum(int a, int b){
    // a and b are formal parameter will be taking value from actual parameter
    int c = a+b;
    return c;
}