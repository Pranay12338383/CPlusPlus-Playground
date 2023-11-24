//Print table using all loops 


#include <iostream>

using namespace std;

int main(){
    int a ;
    cout<<"Enter any number";
    cin>>a;

    // for(int i = 1; i<=10; i++){
    //     cout<<a*i<<endl;
    // }


    // int i = 1;
    // while(i<=10){
    //     cout<<a*i<<endl;
    //     i++;
    // }


      int i = 1;
      do{
        cout<<a*i<<endl;
        i++;
      }
        while(i<=10);

    return 0;
}