#include<iostream>
using namespace std;
 double areaOfSquare(double side){
      double result1 = side* side;
      return result1;
      }
double areaOfRectangle(double length, double width ) {
double  result2 = length * width;
    return result2; 
      }
  double areaOfTriangle(double height, double base){
      double result3 = height * base*0.5;
      return result3;
}
int main(){
    int selection;
    double side;
    double length;
    double width;
    double base;
    double height;
    while (true){
    cout <<" Select the shape to calculate the area or exit"<<endl;
    cout<<" 1. Square"<<endl;
    cout<<" 2. Rectangle"<<endl;
    cout<<" 3. Triangle "<<endl;
    cout<<" 4. Exit the program"<<endl;
     cin>>selection;
    if (cin.fail() || selection < 1 || selection > 4){
     
      cin.clear();
      cin.ignore(200, '\n');
      cout << "Invalid input. Please enter a valid selection: ";
        }
         else {
            
            switch (selection) {
            case 1: // Square
                    cout << "Enter the side of the square: ";
                    cin >> side;
                    cout << "Area of the square: " << areaOfSquare(side) << endl;
                    break;
                case 2: // Rectangle
                 cout << "Enter the length and width of the rectangle: " << endl;
                    cin >> length >> width;
                    cout << "Area of the rectangle: " << areaOfRectangle(length, width) << endl;
                    break;
                
                case 3: // Triangle
                    cout << "Enter the base and height of the triangle: ";
                    cin >> base >> height;
                    cout << "Area of the triangle: " << areaOfTriangle(base, height) << endl;
                    break;
                case 4: // Exit
                    cout << "Exiting the program." << endl;
                    exit(0); // Exit the program
            
        }}
    }

    return 0;
}