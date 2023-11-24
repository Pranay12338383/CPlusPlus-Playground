#include <iostream>

using namespace std;

template <class T>
// agar yaha hum template use nhi karte to hume alag alag classes banani padti alag alag data types ke liye 

// Yaha pe to hum ek hi data type use kar rahe hai 
// agar ek se jyada data types use karna ho to phir hum "Template with multiple paramete " me dekhege 

class vector
{

public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{

    vector<float> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 1;
    v1.arr[2] = 2;

    vector<float> v2(3);
    v2.arr[0] = 1.7;
    v2.arr[1] = 2.8;
    v2.arr[2] = 1.5;

    float pra = v1.dotProduct(v2);
    cout << pra << endl;

    return 0;
}