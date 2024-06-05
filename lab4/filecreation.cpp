#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //create and open a text file 
    ofstream myfile("examplefile.text");

    //close the file
    myfile.close();

 return 0;
 
}