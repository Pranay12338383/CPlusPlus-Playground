//when no copy constructor is found , compiler supplies its own copy constructor 


#include <iostream>

using namespace std;

class  Number{
                 int a;               
                 public: 
                       Number(){
                        a = 0;
                       }   //You must have to create default constructor 


                       //copy constructor 
                       Number(Number &obj){
                        cout<<" Copy constructor called " <<endl;
                         a = obj.a;
                       }


                       Number(int num){
                        a = num;
                       }
                        
                        void display(){
                            cout<<"The number for this object is " << a<< endl;
                        }
};

int main(){

       Number x , y(3) , z(45) , z2 ;
       x.display();
       y.display();
       z.display();

      // z1 should exactly resemble z or x or y
      Number z1(y);   //copy constructor is invoked 
      z1.display();

      z2 = z;    // copy constructor is not invoked  
      z2.display();

        Number z3 = y; //copy constructor is invoked 
        z3.display();

        
return 0;

}