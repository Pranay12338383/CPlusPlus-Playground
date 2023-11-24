#include <iostream>

using namespace std;

int sum(int a,int b,int c=23){
    return(a+b+c);
}

int main(){

       cout<<sum(10,20)<<endl;
       cout<<sum(10,15,20)<<endl;

return 0;

}