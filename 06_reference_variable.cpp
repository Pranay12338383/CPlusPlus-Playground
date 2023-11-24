// Reference variable like ek insaan ke bahot sare name ho sakte hai 


#include <iostream>

using namespace std;

int main(){
     // ek 456 naam ka insaan hai jiska naam x hai aur usi insaan ka naam y bhi hai 
     // si x ki jo value hai wahi value agar y ki bhi karni hai to reference variable ka use karege
     
  int x = 456;
  int &y= x;
  cout<<x<<endl;
  cout<<y<<endl;

  
    return 0;
}