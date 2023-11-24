// Arrays using Loops                                                                                                                                                                                                                                                                                                                                                                                                                           n 


#include <iostream>

using namespace std;

int main(){
int marks[]  = {344,55,666,777};

        // cout<<"Using for loop"<<endl;
    //    for(int  i = 0; i<4; i++){
    //     cout<<"The value of  marks "<<i<<" is "<<marks[i]<<endl;
        
    //    }


  // cout<<"Using for loop"<<endl;
    //     int i = 0;
    //    while ( i<4)
    //    {
    //       cout<<"The marks of student "<<i<< " is " <<marks[i]<<endl;
    //       i++; 
    //    }



  // cout<<"Using for loop"<<endl;
           int i = 0 ;
    do
    {
       cout<<"The marks of student "<<i<<" is " <<marks[i]<<endl;
       i++;
    } while (i<4);
    
       

return 0;

}