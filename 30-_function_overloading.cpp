#include <iostream>

using namespace std;

int sum(int a, int b){
    return (a+b);
}


int sum(int a , int b , int c){
    return(a+b+c);
}


//Volume of cube
int volume(int a){
    return (a*a*a);
}


//volume of cylinder
int volume(int r , int h){
    return(3.14*r*r*h);
}

int main(){

       cout<<"The sum of 3 and 5 is " <<sum(3,5,4)<<endl;
       cout<<"The sum of  4  and 5 is " <<sum(4,5)<<endl;
       cout<<"The volume of cube of  side 8 is " <<volume(8)<<endl;
       cout<<"The volume of cylinder of radius 5 and height 10 is  is " <<volume(5,10)<<endl;


return 0;

}