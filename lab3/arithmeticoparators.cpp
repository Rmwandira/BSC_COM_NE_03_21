#include <iostream>
using namespace std;

int main() {
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
      cout << "line 1 -values of c is :" << c << endl;
       
       c = a - b;
        cout << "line 2 -values of c is :" << c << endl;

        c = a * b;
        cout << "line 3 -values of c is :" << c << endl;
         c = a / b;
          cout << "line 4 -values of c is :" << c << endl;
        c = a % b;
         cout << "line 5 -values of c is :" << c << endl;
          c = a++;
           cout << "line 6 -values of c is :" << c << endl;
        c = a--;
          cout << "line 7 -values of c is :" << c << endl;

        return 0;

}