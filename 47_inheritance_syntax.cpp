#include <iostream>

using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};
// Notes :
// Visibility mode:
// 1. Default visibility mode is private ;
// 2. Private visibility mode  :  Public members of the base class becomes
// private members of the derived class
// 3. Public visibility mode   :  Public members of the base class becomes
// public  members of the derived class
// 4.  Private member of the base class never be inherited by derived class

// Derived Class
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//      class members/methods/etc..
// }

// Creating a Programmer class derived from Employee Base class

// ****class programmer : public Employee  ____--- inherit as public
class programmer : Employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 91;

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{

    Employee Rohan(5), Harry(3);
    cout << Rohan.salary << endl;
    cout << Harry.salary << endl;
    programmer skillF(77);
    cout << skillF.languageCode << endl;
    // cout << skillF.id << endl;
    //'id' is private for programmer kuki humne visibility mode e
    // kuch nhi likha matlab wo private inherit hoga as default
    // agar public inherit karoge to wo 'id' ko le lega
    skillF.getData();

    return 0;
}