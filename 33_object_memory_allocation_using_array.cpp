#include <iostream>

using namespace std;

class shop
{

    int itemId[100];
    int itemPrice[100];
    int counter;//initially to garbage value hi rahegi esiliye counter ko zerokarna padega

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter the Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item no " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    shop dukaan;
    dukaan.initcounter();
    // dukaan.setPrice();
    // dukaan.setPrice();
int n ;
int i ;
cout<<"Enter any number ";
cin>>n;
    for( int i =0 ; i < n ; i++){
        dukaan.setPrice();
    }
    dukaan.displayPrice();

    return 0;
}