#include <iostream>

using namespace std;

class base{
             protected :
                     int a ;
             public:
                   base(){
                    cout<<"Enter the value of protected variable: ";
                    cin>>a;
                    cout<<"The value of protected variable is " <<a<<endl;
                   }
                     
};


class derived : public base{ //Here we access the protected variable by public derivation 
    public:
      int c;
      void process(){
        cout<<"Enter the value of c "<<endl;
        cin>>c;
      }

       void display(){
        cout<<"Sum of " <<a<<" and "<<c<<" is "<<(a+c)<<endl;
       }  
};

int main(){

       derived d;
       d.process();
       d.display();

return 0;

}