#include <iostream>

using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class derived : protected Base
{
    
};
/*
                                         Public derivation    Private derivation  Protected derivation
    1. Private members                    Not Inherited        Not Inherited      Not Inherited
    2. Public members                     Public               Private            Protected   
    3. Protected members                  Protected            Private            Protected   
*/
int main()
{

    return 0;
}