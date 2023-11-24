#include <iostream>

using namespace std;



class human{
    
    private:
            int personal_information  , passwords ;
    public:
            int name , height ;

             void setData(int a,int b);
             void getData(){
                cout<<"The value of personal_information is " <<personal_information<<endl;
                cout<<"The value of passwords is " <<passwords<<endl;
                cout<<"The value of name is " <<name<<endl;
                cout<<"The value of height is " <<height<<endl;
            
             }

};


void human :: setData(int a , int b){
            personal_information = a ;
            passwords =b ;
}



int main(){

    human pranay;
   // pranay.personal_information;// you can not access this or you cannot change its 
   // value here because it is private 
    pranay.name = 3;
    pranay.height = 6'6;
    pranay.setData (1,2);
    pranay.getData ();

       

return 0;

}