#include <iostream>

using namespace std;

class simple{
        int data1 ;
        int data2 ;
        int data3 ;
        public:  
                simple(){}
                simple(int a , int b = 7, int c = 8){
                    data1 = a ;
                    data2 = b ;
                    data3 = c ;
                }
                    

                void printdata();
               

};


void simple :: printdata(void){
                    cout<<" The value of data1 , data2 and data3  is  "<<data1<<" , "<<data2<<" and "<<data3<<endl;
                    
                }



int main(){

       simple s1(3), s();// if you did not give the value of b then it takes the default value of b 
       s1.printdata();
      
     
return 0;

}