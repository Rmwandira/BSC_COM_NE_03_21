#include <iostream>
using namespace std;

int main() {
    int num;


    cout << "Please enter an integer between 5 and 10: "<< endl;

    while (true) {
        cin >> num;

    
        if (cin.fail()){
      
            cin.clear();
       
            cin.ignore();
        
     cout << "sorry, you entered an Invalid number. Please try again" << endl;}
        
     
     else if (num<5 || num>10){
             cin.clear();
             
             cin.ignore();
             cout << " you entered "<< num <<" Please enter number between 5 and 10" << endl;
     }
     
            else{
          
            break;
            }
        
        } 

  
    cout << "Your input (" << num << ") has been accepted." << endl;

    return 0;}