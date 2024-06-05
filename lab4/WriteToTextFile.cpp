#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream Myfile("example.txt");

    if (Myfile.is_open()) {
        Myfile << "This is a line.\n";
        Myfile << "This is anothe line.\n";
        Myfile.close();
    } else {
        cout << "unable to open file";
    }  
    return 0;
}