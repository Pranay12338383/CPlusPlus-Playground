#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    // function object  : function wrapped in a class so that it available like an object

    int arr[] = {45, 34, 90, 5, 13, 2};
    // sort in ascending order 
  //  sort(arr, arr + 6); // arr se lekar arr+6 tak sort kar do  // agar +6 ki jagah +4 lekhoge to wo utna hi sort karega
    
    // sort in decending order 
    sort(arr, arr + 6, greater<int>());  // here greater<int>() is 'function object'
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    cout<<"The size is " <<size(arr);  // size of an array 
    

    return 0;
}