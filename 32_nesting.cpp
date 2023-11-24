#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;  // by default classes me sab kuch private hi hota hai 

public:
    void read(void);
    void chk_binary(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter binary number" << endl;
    cin >> s;
}

void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
           exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
     chk_binary();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary ::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for(int i = 0 ; i<s.length(); i++){
        cout<< s.at(i);
    }
    cout<<endl;
}

int main()
{

    binary a;
    a.read();
    //a.chk_binary();  agar hum isko comment bhi kar dete hai to function execute hoga 
    // kuki humne chk_binary ko ones_compliment me likh diya hai 

    // agar tum nhi chahate ho ye function ko user ko dikhana lekin phir bhi function ko 
    //execute karna chahate ho to aisa kar sakte ho 
    // aur agar   void chk_binary(void); isko private bhi kar dete ho to phir wo chah kar bhi bahar
    // se usme chedkhani nhi kar sakta hai 

    // THIS ALL POSSIBLE DUE TO NESTING 
    a.ones_compliment();
    a.display();

    return 0;
}