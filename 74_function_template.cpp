#include <iostream>

using namespace std;

// float funcAverage( int a , int b){
//     float avg = (a+b)/2;
//     return avg;
// }


// float funcAverage2(float a , float b){
//     float avg = (a+b)/2;
//     return avg;
// }


// Humko har cheez calculate karne ke liye alag alag function banana pad raha hai 
// Jiske jagah hum Function Template bana sakte hai 



template < class T1 , class T2>
float funcAverage(T1 a , T2 b){
    float avg = (a+b)/2;
    return avg;
}


template < class T >
void swapp(T &a , T &b){
   T temp = a;
   a = b ;
   b = temp; 
}


int main(){

float a ;
 a = funcAverage(69.987,68.97);  //  yaha pe koi bhi data type de sakte ho ...
printf("The average of a and b is %.2f " , a); // You can also use cout 

  int x = 4 , y = 6 ;
  cout << "\n The value before swaping : \nx = "<< x <<"   y= "<<y<<endl;
  swapp(x,y);
  cout << "\n The value after swaping : \nx = "<< x <<"   y= "<<y<<endl;
       

return 0;

}