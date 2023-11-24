#include <iostream>

using namespace std;

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base 1 class constructor called : " << endl;
    }

    void printdata1(){
        cout<<"The value of data 1 is : " <<data1<<endl;
    }
};



class base2{
    int data2;
      public:
           base2(int j){
            data2 = j ;
            cout<<"Base 2 class constructor   called : " <<endl;
           }
         
         void printdata2(){
            cout<<"The value of data 2 is : "<<data2<<endl;
         }
};



// class derived : public base2 , public virtual base1  ----> yaha pe virtual ko jyada preferance di jayegi 
class derived : public base2 , public  base1{// yaha se order change kar sakte ho base1 and base2 ka 
int derived1 , derived2;
 public: 
 derived(int a , int b , int c , int d) :base2(b) , base1(a) {
           derived1 = c;
           derived2 = d;
           cout<<"Derived class constructor called : " <<endl;
 }

 void printdata3(){
            cout<<"The value of derived1 is : "<<derived1<<endl;
            cout<<"The value of derived2 is : "<<derived2<<endl;
 }

};
int main()
{
   
   derived p(1,2,3,4);
   p.printdata1();
   p.printdata2();
   p.printdata3();
  
    return 0;
}