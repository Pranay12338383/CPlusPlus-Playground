// base class ka pointer point kar raha hai derived class ke object ko 

#include <iostream>

using namespace std;

class  baseClass {

     public: 
              int var_base;
              void display(){
                cout<<"Displaying the Base class variable var1 "<<var_base<<endl;
              }

};


class derivedClass : public baseClass{
 
      public: 
              int var_derived;
              void display(){
                cout<<"Displaying the derived class variable var1 "<<var_derived<<endl;
              }

};

int main(){
      // COMPILE TIME POLYMORPHISM
       baseClass * base_class_pointer; 
       baseClass obj_base;
       derivedClass obj_derived;
       base_class_pointer = &obj_derived; // base class ka pointer point kar raha hai derived class ke object ko 
       
       base_class_pointer ->var_base = 34;
      // base_class_pointer ->var_derived = 344;  you can't access the members of derived class
      // because 'base_class_pointer'  is pointer of BASE CLASS
       base_class_pointer ->display();

      


return 0;

}