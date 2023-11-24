 


// array me jaise hum size change nhi kar sakte hai
// Par hum "vector" me size change kar sakte hai

#include <iostream>
#include <vector>

using namespace std;

template < class T >

void display(vector<T> &v)
{
     cout<<"Displaying this vector  : " <<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //cout << v.at(i)<< " ";
    
    }
      cout<<endl;
}

int main()
{
    int element, size = 5;

//     cout << "Enter the size of your vector : " <<endl;
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter an element to add to this vector :";
//         cin >> element;
//         vec1.push_back(element);            // this is one method of vector 
//     }

//   //  vec1.pop_back();           // matlab jo last element hai wo nikal lo , last wala element print nhi hoga 

//     display(vec1);
//     vector<int>  :: iterator iter = vec1.begin();
//  //   vec1.insert(iter +1 , 3 , 455);
//     display(vec1);




   //  Ways to create vector : 
   
    vector<int> vec1;      // zero length integer vector 
    vec1.push_back(9);   // yaha push back use karoge phir bhi ye '1' ko print nhi karega it will print only default value 
    display(vec1);    // ye kuch display hi nhi karega jab tum run karoge because it is zero length vector 

    vector<char> vec2(4);      // 4 element character vector 
    vec2.push_back('4');
    display(vec2);    // it will display four element if you give some value using push_back

    vector<char> vec3(4);      // 4 element character vector  
    vec3.push_back('4');
    display(vec3);   


    vector<int> vec4(6,3);         // 6 element vector of 3s   // matlab 3 ko 6 baar print karega // This method is good from other
    vec4.emplace(vec4.begin()+1,5); // aage se 2nd number pe ye 5 print kar dega vec4 me 
    display(vec4);
    cout<<vec4.size();          // give size of your given vector 
   


    return 0;
}