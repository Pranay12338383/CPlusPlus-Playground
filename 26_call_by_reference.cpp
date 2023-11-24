#include <iostream>

using namespace std;

void swapPointer(int* a , int* b){
    int temp = *a;
         *a = *b;
         *b = temp;
}

int main(){

      int  x= 3 ;
      int  y= 4 ;
      cout<<"The value of  x and y before swap is " <<x<< " and "<<y<<endl;
      swapPointer(&x,&y);
      cout<<"The value of  x  and y after swap is  " <<x<< " and " <<y<<endl;
return 0;

}



void swap(int* a , int* b){
    int temp = *a;
         *a = *b;
         *b = temp;
}

int main(){

      int  x= 3 ;
      int  y= 4 ;
      cout<<"The value of  x and y before swap is " <<x<< " and "<<y<<endl;
      swap(&x,&y);
      cout<<"The value of  x  and y after swap is  " <<x<< " and " <<y<<endl;
}