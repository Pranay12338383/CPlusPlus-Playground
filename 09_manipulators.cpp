#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int a = 3, b = 34, c = 345 , d = 3456;

    cout<<"The value of a without setw is " <<a<<endl;
    cout<<"The value of b without setw is " <<b<<endl;
    cout<<"The value of c without setw is " <<c<<endl;
    cout<<"The value of d without setw is " <<d<<endl;

    cout<<"The value of a with  setw is " <<setw(4)<<a<<endl;
    cout<<"The value of b with  setw is " <<setw(4)<<b<<endl;
    cout<<"The value of c with  setw is " <<setw(4)<<c<<endl;
    cout<<"The value of d with  setw is " <<setw(4)<<d<<endl;
    
    
    return 0;

}