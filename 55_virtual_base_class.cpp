#include <iostream>

using namespace std;

// Virtual Base Class
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class test : virtual public student
{
    protected:
       float maths;
       float physics;
    public:
        void set_marks(float m1 , float m2 ){
            maths=m1 ;
            physics=m2;
        }

        void print_marks(){
            cout<<"Your marks is here "<<endl
            <<"Maths :" <<" = "<<maths<<endl
            <<"Physics :" <<" = "<<physics<<endl;
        }
        
};

class sports : virtual public student
{
    protected:
         float score;
    public: 
         void set_score(float sc){
            score=sc;
         }

         void print_score(){
            cout<<"Your PT score is " <<score<<endl;
         }
};

class result : public test, public sports
{
    private :
     float total;
    public:
     void display(void){
        total = physics+maths+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is " <<total<<endl;
     }
       
};

int main()
{
    result Pranay;
    Pranay.set_number(45);
    Pranay.set_marks(78.99,99.5);
    Pranay.set_score(9);
    Pranay.display();
   
    return 0;
}