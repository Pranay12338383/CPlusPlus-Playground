#include <iostream>

using namespace std;

int main()
{

    // *--->> Dereference operator   -->  matlab mai address se value nikal raha hu

    int a = 4;
    int *ptr = &a;

    cout << "The value of a is : " << *(ptr)<<endl;


    // New operator

    //int *p = new int(40);
      float *p = new float(45.59);
    cout << "The value of at address p is  is : " << *(p)<<endl;


    //dynamically allocate memory
    int *arr = new int[3];// it can be float or anything 
    arr[0] = 45;
    arr[1] = 34;
    arr[2] = 78;
   delete[] arr;
    cout<<"The value of arr[0] is : " <<arr[0]<<endl;
    cout<<"The value of arr[1] is : " <<arr[1]<<endl;
    cout<<"The value of arr[2] is : " <<arr[2]<<endl;

    

   // Delete operator
   // Ye dynamically allocate array ko delete kar deta hai

    return 0;
}