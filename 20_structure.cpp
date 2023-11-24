#include <iostream>

using namespace std;

struct employee
{
    int empId;
    char favChar;
    float salary;
};

int main()
{

    struct employee pranay;
    struct employee rohandas;

    pranay.empId = 1;
    pranay.favChar = 'p';
    pranay.salary = 129999900;

    rohandas.empId = 2;
    rohandas.favChar = 'r';
    rohandas.salary = 2345555;
    
    cout<<"Employee Detail of Pranay singh";
    cout << pranay.empId << endl;
    cout << pranay.favChar << endl;
    cout << pranay.salary << endl;
    cout<<endl<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    cout<<"Employee Detail of Rohandas";
    cout << rohandas.empId << endl;
    cout << rohandas.favChar << endl;
    cout << rohandas.salary << endl;

    return 0;
}