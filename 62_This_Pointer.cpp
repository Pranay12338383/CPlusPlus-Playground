#include <iostream>

using namespace std;

class A {
           int a ;
           public:
               void set_data(int  a ){
                this-> a = a ;
               }
               void get_data(){
                cout<<"The value of a is " <<a<<endl;
               }
};

int main(){

       A p;
       p.set_data(33);
       p.get_data();

return 0;

}