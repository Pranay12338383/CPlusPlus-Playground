#include <iostream>

using namespace std;

class Employee{
    int Id;
    static int count;
    public:      
           void setId(void){
            cout<<"Enter the Id of employee  " <<count+1 <<endl;
            cin>>Id;
            count++;
           }   

           void getId(void){
            cout<<"The Id of you employee no " <<count<< " is " <<Id<<endl;
           
           }
    
};

int  Employee :: count;

int main(){

    Employee fb[3];

    for(int i = 0 ; i < 3 ; i++ ){
        fb[i].setId();
        fb[i].getId();
    }    
   
return 0;

}