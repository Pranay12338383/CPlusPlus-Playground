#include <iostream>

using namespace std;

/*
      SYNTAX FOR TEMPLATE WITH MULTIPLE PARAMETERS

      

      template < class T1 , class T2 >
      class nameofclass {
        class body 
      };
*/

template < class T1 , class T2 >

class myClass{
          public: 
               T1 data1;
               T2 data2;

               myClass(T1 a , T2 b){
                   data1 = a;
                   data2 = b;
               }

                void display(){
                    cout<<this->data1<<endl<<this->data2;
                }
};

int main(){


myClass <int , char> obj(3,'a');  // Yaha pe tum data type change karke kuch bhi doge wo aa jayga 
// Template na hota to tumhe har data-type ke liye alag-alag classes banana padta 
obj.display();
       

return 0;

}