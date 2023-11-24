/*create 2 classes
1. SimpleCalculator -- takes input of 2 numbers using a utility function and perform +,-,*./
   and displays the result using another utility function
2. ScientificCalculator -- takes input of 2 numbers using a utility function and perform any four
   scientific operation of your choice  and displays the result using another utility function



   Create another class HybridCalculator and inherit it using these 2 classes:
   Q1. What type of inheritance are you using ?
   Q2. Which mode of inheritance are you using ?
   Q3. Create an object of HybridCalculator and display results of simple and scientific calculators ?
   Q4. How is Code reusability is impleted ?

*/

#include <iostream>
#include <cmath>

using namespace std;


class SimpleCalculator
{
protected:
  double a, b;
  char op;

public:
  void set_number()
  {
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter the operator : ";
    cin >> op;
    cout << "Enter secong number: ";
    cin >> b;
  }

  void display()
  {

    int result;
    switch (op)
    {
    case '+':
      result = (a + b);
      break;
    case '-':
      result = (a - b);
      break;

    case '*':
      result = (a * b);
      break;

    case '/':
      if (b != 0)
      {
        result = (a / b);
      }
      else{
        cout<<"Cannot divide by zero";
      }
      break;

    default:
      break;
    }
    cout<<"result = " << a << op << b <<" = "<<result<<endl;
    
  }
};

  
  class ScientificCalculator : public SimpleCalculator{
protected:
    int choice ;
    double theta;

    public:
        void se_number2(){
          
        }
      
  };




int main()
{

  ScientificCalculator p;
  
   p.set_number();
   p.display();

   //p.pranay();
   p.set_number2();
   p.display2();


return 0 ;
}