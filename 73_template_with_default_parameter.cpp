#include <iostream>

using namespace std;

template <class T1 = int , class T2 = float >
class Pranay{
 public:
        T1  a;
        T2  b;
        Pranay(T1 x , T2 y){
            a = x ;
            b = y ;
        }
          
          void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The sum of a and b is "<<a+b<<endl;
          }
};

int main(){

Pranay <> p(23 ,5.6); // agar tum ya
p.display();

Pranay <float , int > s(21.4 ,5); // agar tum ya
s.display();


       

return 0;

}