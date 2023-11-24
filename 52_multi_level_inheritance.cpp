#include <iostream>

using namespace std;


// class 1
class Student
{
protected:
      int roll_no;

public:
      void set_roll_number(int);
      void get_roll_number(void); // jo hume kuch de raha hai wo le thodi na kuch raha hai isiliye void
};

void Student ::set_roll_number(int r)
{
      roll_no = r;
}

void Student ::get_roll_number()
{
      cout << "The roll no is " << roll_no << endl;
}



// class 2
class exam : public Student
{ // Inherited Student class
protected:
      float maths;
      float physics;

public:
      void set_marks(float, float);
      void get_marks();
};

void exam ::set_marks(float m1, float m2)
{
      maths = m1;
      physics = m2;
}

void exam ::get_marks()
{
      cout << "The marks obtained in maths are " << maths << endl;
      cout << "The marks obtained in physics are " << physics << endl;
}




// class 3
class result : public exam
{

      float percentage;

public:
      void display();
};

void result ::display()
{
      get_roll_number();
      get_marks();
      cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
}

int main()
{
      /*
          Notes:
           If we are inheriting   B from A and C from B : [A-->B-->C]
           1. A is base class for B and B is the base Class for the C
           2. A-->B-->C is called inheritance Path
      */
      result pranay; // jo last derived class hogi wahi yaha pe ayega
      pranay.set_roll_number(3);

      pranay.set_marks(90.5, 99.0);

      pranay.display();

      return 0;
}