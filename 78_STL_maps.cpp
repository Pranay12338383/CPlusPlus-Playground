#include <iostream> 
#include <map> 

using namespace std;

// Map is associative array 

int main(){

       map <string , int> marksMap;
       marksMap["Pranay"] = 99;
       marksMap["Rohan"] = 77;
       marksMap["Lalit"] = 59;

       marksMap.insert({"Aditya" , 89} );
       map <string , int> :: iterator iter;
       for ( iter = marksMap.begin(); iter != marksMap.end(); iter++)
       {
            cout<<(*iter).first<<" "<<(*iter).second<<"\n";
       }
       
       cout<<"The size is : "<<marksMap.size()<<endl;
       cout<<"The max size is : "<<marksMap.max_size()<<endl;
       cout<<"The empty's return value is : "<<marksMap.empty()<<endl;


return 0;

}