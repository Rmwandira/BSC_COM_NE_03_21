
#include <iostream>  

using namespace std;

int main() {
  // Dimensions of the arrays
  int rows;  
  int columns;
  cout <<" enter value of rows and colums ,and 9  it must not exceed 3"<<endl;
  while(true){
  cin>>rows;
  cin>>columns;
  
  if(cin.fail()) {
      cin.clear();
      cin.ignore();
      cout<<" please enter  integer values "<<endl;
      } 
      else if(rows >3 || columns > 3){
       cin.clear();
      cin.ignore();
      cout<<" please enter integer values  not exceeding 3 "<<endl; 
      }
      
      else{
          

 
  double ** dynamicDoubleArray = new  double  * [rows];  
  for (int i = 0; i < rows; i++) {
    dynamicDoubleArray[i] = new double [columns];  
  }

  
  double value = 3.4;  
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      dynamicDoubleArray[i][j] = value;
      value += 1.0;  
    }
  }

 
 
   

  // Display the elements of the bouble array
  cout << "Dynamically allocated double array:" << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << dynamicDoubleArray[i][j] << " ";  //
    }
    cout << endl;
  }
  cout << endl;

  
  
  // Deallocate the memory allocated for array
  for (int i = 0; i < rows; i++) {
    delete[] dynamicDoubleArray[i];
   
  }
  delete[] dynamicDoubleArray; 
  }
  }

  return 0;  
}

