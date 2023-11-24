#include <iostream>
#include <fstream>

using namespace std;

/*
   ifstream -->  is derived from fstream base class
   ofstream -->  is derived from fstream base class
*/

int main()
{
    // Openings file using "CONSTRUCTOR"  and writing in  it

    //   string pra = "Pranay Singh " ;
    //   ofstream  out ("sample_68.txt"); // Write operation
    //    out<<pra;
    //    out.close();





    // Reading a file

    string pra;
    ifstream in("sample_68_b.txt");
    // in>>pra;
    getline(in, pra);
    cout << pra;
    in.close();

    return 0;
}