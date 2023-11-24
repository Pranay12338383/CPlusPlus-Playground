//  floaat , double and long double Literals

#include <iostream>

using namespace std;

int main(){

    cout<<"The size of 34.4 is " <<sizeof(34.4)<<endl;// Its size is 8 therefore compiler take it as a double
    cout<<"The size of 34.4 is " <<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is " <<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is " <<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is " <<sizeof(34.4L)<<endl;
    
    return 0;
}