#include <iostream>
using namespace std;

 int main() {
    int a = 60;
     int b = 13;
     int c;

     
     c = a & b;
       cout << "line 1 - value of c is:"<< c << endl;
     c = a | b;
      cout << "line 2 - value of c is:"<< c << endl;
      c  = a ^ b;
       cout << "line 3 - value of c is : "<< c << endl;
      c = ~a;
       cout << "line 4 - value of c is :"<< c << endl;
       c = a << 2;
        cout << "line 5 -value of c is :"<< c << endl;
        c = a >> 2;
         cout << "line 6 -value of c is :"<< c << endl;

         return 0;
 }