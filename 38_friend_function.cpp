#include <iostream>

using namespace std;

class complex
{
private:
        int a ;
        int b ;
        int friend sumcomplex(complex o1 , complex o2);
public:
        void setNumber(int n1 , int n2 ){
            a = n1;
            b = n2;
        }
        
        //friend sumcomplex(complex o1 , complex o2);  public and private dono jagah likh sakte hai ese
         
         void printNumber(){
             cout<<"Your number is " <<a<<" + " <<b<< "i"<<endl;
         }
};

  int  complex sumcomplex(complex o1, complex o2){

        //  n1 = o1.a + o2.a;
        //  n2 = o1.b + o2.b;
        complex o3;
        o3.setNumber((o1.a + o2.a) , (o1.b + o2.b));
        return o3;
 }


int main(){
     complex c1, c2;
     c1.setNumber(1,4);
     c2.setNumber(5,8);
     c1.printNumber();
     c2.printNumber();

return 0;

}