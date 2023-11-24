#include <iostream>

using namespace std;

class  BankDeposit {
          int principle ;
          int year ;
          float interestRate ; 
          float returnValue ;

          public: 
                    BankDeposit(){}//yaha humne blank constructor banaya taki agar hum input na bhi 
                    // constructor me to wo bhi wo run ho jaye 
                    BankDeposit(int p , int y, float r);//r can be value like this 0.05
                    BankDeposit(int p , int y, int  r);//r can be value like this 5(int percentage)
                    void show();
};


BankDeposit :: BankDeposit(int p , int y, float r){
principle = p ;
year = y; 
interestRate = r; 
returnValue = principle;

for(int i = 0 ; i<y ; i++)
{
    returnValue = returnValue*(interestRate+1);//Let say tumne 100 rupees jama kiye at 0.04 interest rate se 
    // to let after one year it's returnvalue is 100*(0.04 +1) = 104 
}

}




BankDeposit :: BankDeposit(int p , int y, int  r){
principle = p ;
year = y; 
interestRate = float(r)/100; 
returnValue = principle;

for(int i = 0 ; i<y ; i++)
{
    returnValue = returnValue*(interestRate+1);

}

}


void BankDeposit :: show()
{
    cout<<"The Principle amount was " <<principle<<" and the "
        <<" return value after " <<year<<" year is " << returnValue<<endl;
}


int main(){
          BankDeposit bd1 , bd2 , bd3;
          int p ;
          int y ;
          float r;
          int R ;

          cout<<"Enter the value of p , y and r ";
          cin>>p>>y>>r;
          bd1 = BankDeposit(p,y,r);
          bd1.show();
           
           cout<<"Enter the value of p , y and R ";
           cin>>p>>y>>R;
          bd2 = BankDeposit(p,y,R);
          bd2.show();

return 0;

}