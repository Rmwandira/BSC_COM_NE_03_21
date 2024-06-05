#include <iostream>
using namespace std;

 int main() {
    int a = 21;
    int c;
      c = a;
      cout << "line 1 -= Operator, values of c = :"<< c << endl;
     
       c += a;
         cout << "line 2 += Operator, values of c = :"<< c << endl;
        c -= a;
          cout << "line 3 -= Operator, values of c = :"<< c << endl;
         c *= a;
           cout << "line 4  *= Operator, values of c = :"<< c << endl;
         c /= a;
           cout << "line 5 /= Operator, values of c = :"<< c << endl;
         // lets change the value of a
          c = 200;
           c %= a;
             cout << "line 6 %= Operator, values of c = :"<< c << endl;
         c <<= 2;
          cout << "line 7 <<= Operator, values of c = :"<< c << endl;
         c >>= 2;
          cout << "line 8 >>= Operator, values of c = :"<< c << endl;
             c &= 2;
               cout << "line 9 &= Operator, values of c = :"<< c << endl;
               c ^= 2;
                cout << "line 10 ^= Operator, values of c = :"<< c << endl;
                  c |= 2;
                    cout << "line 11 |= Operator, values of c = :"<< c << endl;

 }