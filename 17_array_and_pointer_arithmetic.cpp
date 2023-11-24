#include <iostream>

using namespace std;

int main()
{

   int marks[4] = {23, 45, 56, 89};  // This one is easy to write     

   cout << marks[0] << endl;
   cout << marks[1] << endl;
   cout << marks[2] << endl;
   cout << marks[3] << endl;                       
   cout << endl
        << endl;

   // Another way of writing same

   marks[0] = 23;
   marks[1] = 45;
   marks[2] = 56;
   marks[3] = 89;

   cout << marks[0] << endl;
   cout << marks[1] << endl;

   // You can change the value of an array
   marks[2] = 7447;
   cout << marks[2] << endl;
   cout << marks[3] << endl;

   return 0;
}