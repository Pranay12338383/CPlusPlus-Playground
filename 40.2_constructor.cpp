// Creates a function which takes 2 point objects and computes the distance 
// between those points(Hint : Make it a friend function)
// #include <math.h>


#include <iostream>

using namespace std;


class Point
{    
    int x , y ;
        public:
                    Point(int a , int b ){
                         x = a ;
                         y = b ;
                    } 

                    void displayPoint(){
                        cout<<" The point is ("<<x<<" , "<<y<<")"<<endl;
                    }
};

int main(){

       Point p(3,5);
       Point q(2,6);

       p.displayPoint();
       q.displayPoint();

return 0;

}