// VIRTUAL FUNCTION

#include <iostream>

using namespace std;

class  baseClass {

     public: 
              int var_base = 2;
              virtual void display(){   //
                cout<<"1. Displaying the Base class variable var1 "<<var_base<<endl;
              }

};


class derivedClass : public baseClass{
 
      public: 
              int var_derived =90;
              void display(){
                cout<<"2. Displaying the derived class variable var1 "<<var_derived<<endl;
              }

};






int main(){

       // RUN TIME POLYMORPHISM
       baseClass * base_class_pointer;
       baseClass obj_base;
       derivedClass obj_derived;

       base_class_pointer = &obj_derived;
       base_class_pointer ->display();

     

return 0;

}