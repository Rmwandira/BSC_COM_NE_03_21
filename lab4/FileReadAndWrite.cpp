#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char data [100];
    //open atext file in write mode.
    ofstream outfile;
    outfile.open("a file.txt");

    cout << "writting to the file" << endl;
    cout << "enter your name:";
     cin.getline(data,100);

     //write inputted data into the text file.
     outfile << data <<endl;
     cout << "enter your age:";
     cin>>data;
     cin.ignore();

     //again write inputted data into the text file.
     outfile << data << endl;

     //close the opened file
     outfile.close();

     //open a text file in read mode.
     ifstream infile;
     infile.open("a file.txt");

     cout << "Readind from the file" << endl;
     infile>> data;

     //write the data at the screen
     cout << data << endl;

     //again read the data from the file and display it
     infile >> data;
     cout << data <<endl;

     //close the opened file.
     infile.close();

     return 0;

    }