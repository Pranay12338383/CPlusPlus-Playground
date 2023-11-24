#include <iostream>
#include <cmath>

using namespace std;

class simpleCalculator
{
    int a;
    int b;
public:
    void get_datasimple()
    {
        cout << "Enter the value of a :" << endl;
        cin >> a;
        cout << "Enter the value of b :" << endl;
        cin >> b;
    }

    void perform_operationsimple()
    {
        cout << "The value of " << a << " + " << b << " is " << a + b << endl;
        cout << "The value of " << a << " - " << b << " is " << a - b << endl;
        cout << "The value of " << a << " * " << b << " is " << a * b << endl;
        cout << "The value of " << a << " / " << b << " is " << a / b << endl;
    }
};

class scientificCalculator : public simpleCalculator
{

    int c;
   

public:



    void get_datascientific()
    {
        cout << "Enter the value of a :" << endl;
        cin >> c;
      
    }

    void perform_operationscientific()
    {
         

        cout << "The value of cos(c) is : " << cos(c) << endl;
        cout << "The value of sin(c) is : " << sin(c) << endl;
        cout << "The value of tan(c) is : " << tan(c) << endl;
        cout << "The value of exp(c) is : " << exp(c) << endl;
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{
    public: 
   void display (){
    simpleCalculator ::get_datasimple();
    simpleCalculator ::perform_operationsimple();
  
   }
};

int main()
{

   hybridCalculator p;
   p.display();
  
    return 0;
}