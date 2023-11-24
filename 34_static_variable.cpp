#include <iostream>

using namespace std;

class Employee{
    int Id;
    static int count;

    public:
            void setData(void){
                cout<<"Enter your Id ";
                cin>>Id;
                count++;
            }

            void getData(void){
                   cout<<"The id of employee " <<count<< " is " <<Id<<endl;
            }    
            
};


// count is static data member of class Employee.
int  Employee :: count; // default value is zero ---> if you want to start your program from 
// specific number then in upper line you can just writ  count = 1000; that's it .

int main(){

       Employee Pranay  ,  Ayush  ,  Kishan , Rohan ;

       Pranay.setData();
       Pranay.getData();

       Ayush.setData();
       Ayush.getData();

       Kishan.setData();
       Kishan.getData();

       Rohan.setData();
       Rohan.getData();

return 0;

}