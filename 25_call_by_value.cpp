// Call by value do not change the actual parameter of the function
// It will only pass the copy of the actual parameter 


//Call by reference will change the actual parameter of the function


#include <iostream>

using namespace std;

void swap(int a , int b){
    int temp = a;
         a = b;
         b = temp;
}

int main(){

      int  x= 3 ;
      int  y= 4 ;
      cout<<"The value of  x and y before swap is " <<x<< " and "<<y<<endl;
      swap(x,y);
      cout<<"The value of x  and y after swap is  " <<x<< " and " <<y<<endl;
return 0;

}