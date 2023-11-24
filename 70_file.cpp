#include <iostream>
#include <fstream>
#include <string>
                                                                                                                         
using namespace std;

int main(){

       ofstream out;
       out.open("hello.txt");
       out<<"Pranay Singh  "<<endl;
       out<<"This is pranay singh who is writing this "<<endl;
       out.close();


       ifstream n;
       string st;
       n.open("hello.txt");
     //  in>>st;
     //  cou<<st;
     while(n.eof() ==0)
     {
        getline (n,st);
        cout<<st<<endl;
     }
       n.close();
return 0;

}