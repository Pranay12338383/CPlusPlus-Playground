// Parameter Constructor 


#include <iostream>

using namespace std;

class complex{
                 int a , b ;
                 public:
                      complex (int  , int );

                      void printNumber(){
                         cout<<"Your number is " << a << " + " <<b<< " i "<<endl;
                      }
};

complex :: complex(int x , int y)//This is parameterized constructor as it takes parameter 
{
    a = x ;
    b = y ;
}
int main(){

// Implicit call 
complex c(4,6); 


// Explicit call
complex d = complex(2,3);

c.printNumber();
d.printNumber();
       

return 0;

}