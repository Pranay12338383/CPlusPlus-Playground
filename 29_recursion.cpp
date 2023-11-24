//factorial of a number
//fibonacci sequence 
//Hum position number dalege aur programm batayega ki us position pe kon sa fibonacci sequence hai


#include <iostream>

using namespace std;

int factorial(int n){

    if(n<=2){
        return 1;
    }
    return n*factorial(n-1);
}


int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
    //fib(5) =
    //fib(4)          +      fib(3)
    //fin(3) +            fib(2)           +     fib(2)             + fib(1)
    //fib(2) + fib(1) +   fib(1) + fib(0)         fib(1) + fib(0)   + fib(0.66
    
}


int main(){

    int a;
    cout<<"Enter the number for which you want a factorial ";
    cin>>a;
    cout<<"The factorial of " <<a<< " is " <<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position  " <<a<< " is " <<fib(a)<<endl;



return 0;

}

