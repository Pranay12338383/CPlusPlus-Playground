#include <iostream>

using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void set_data(int a, float b)
    {
        id = a;
        price = b;
    }

    void get_data()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{

    shopItem *ptr = new shopItem[3]; // Here we use shop as data_type
    shopItem *ptrTemp = ptr;
    int p;
    float q;
    int i;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the Id and Price of item " << i + 1 << endl;
        cin >> p >> q;
        (*ptr).set_data(p, q);
        ptr++;
    }


    
    // Agar hum log wahi 'ptr' use karte jo upar hai to wo end to 3 pe hua hai to phir wo neeche start  bhi
    // 3 ke aage se hoga jo ki galat hai isiliye hum naya ptr banaye ge
    for (int i = 0; i < 3; i++)
    {
        cout << "Item no " << i + 1 << endl;
        ptrTemp->get_data();
        ptrTemp++;
    }
    return 0;
}