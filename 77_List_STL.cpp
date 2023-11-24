// LIST

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{

    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{

    list<int> list1;    // list of zero length
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(8);
    display(list1);
  
                   // REMOVING ELEMENT FROM THE LIST 

    // list1.pop_back();
    // display(list1);   // this will pop out the last element from the list1  

    // list1.pop_front();
    // display(list1);   // this will pop out the first element from the list1

    // list1.remove(1);     // by using this you can remove any specific element from the list 
    // display(list1);     


                  // SORTING THE  LIST 

    // list1.sort();       // sort() fuction sorts the elements in ascending order
    // display(list1);



                  // REVERSING THE LIST 
      list1.reverse();
      display(list1);

    

    list<int> list2(3); // Empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 53;
    iter++;

    *iter = 33;
    iter++;

    *iter = 15;
    iter++;
    display(list2);


    list1.merge(list2);
    list1.sort();
    list2.sort();
    cout<<"List 1 after sorting and merging : ";
    display(list1);
    // cout<<"List 1 after merging : ";
    // display(list1);




    return 0;
}