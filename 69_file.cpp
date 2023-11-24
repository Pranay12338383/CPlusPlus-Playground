#include <iostream>
#include <fstream>

using namespace std;

int main(){

       // Connecting our file with hour stream 
       ofstream hout("hello.txt");

       // Creating a name string and filling it with the string entered by the user 
       string name ;
       cout<<"Enter your name : " ;
       cin>>name;
      

       // Writing a string to the file 
       hout<<"My name is " + name;


    //   Reading a string from the file 
    
    //    ifstream hin("hello.txt");
    //    string content;
    //    getline(hin,content);
    //    // hin>>content;
    //    cout<<"The content of the file is " <<content<<endl;
       
    //   hin.close();
return 0;

}