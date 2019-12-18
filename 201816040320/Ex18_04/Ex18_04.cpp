#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Array.h"

int main()
{
    Array<int> a(9);
    Array<double> b(9);
    Array<char> c(9);
    cout << "Size fo Array int is 9"<< endl;
    cout << "Array after initialization:"<< endl;
   cin >> a;

   cout << "\nSize fo Array double is 9"<< endl;
   cout << "Array after initialization:"<< endl;
   cin >> b;

   cout << "\nSize fo Array char is 9"<< endl;
   cout << "Array after initialization:"<< endl;
   cin >> c;

   cout << "\nAfter input, the Arrays contain:"<<endl;
   cout << "int:"<<endl;
   cout << a << endl;
   cout << "\ndouble:"<<endl;
   cout << b << endl;
   cout << "\nchar:"<<endl;
   cout << c << endl;
}
