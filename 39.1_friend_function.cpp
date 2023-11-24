#include <iostream>

using namespace std;

class Y;

class X{
          int data;
          friend void add(X,Y);
          public:
                  void setValue(int value){
                    data = value ;
                  }

};

class Y{
            int num ;
            friend void add(X,Y);
            public:
            friend void add(X,Y);
               void setValue(int value ){
                num  = value ;
               }
};


void add(X o1 , Y o2 ){
       cout<<"Summing data of X and Y objects gives me " <<(o1.data + o2.num)<<endl;
}

int main(){

       X a1;
       a1.setValue(12);

       Y b1;
       b1.setValue(33);

       add(a1,b1);


return 0;

}