#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {
    // Create objects of Rectangle and Triangle
    Rectangle rect;
    Triangle trgl;

    // Set dimensions of Rectangle and Triangle

    rect.SetValues(4, 5);
    trgl.SetValues(4, 5);

    // Calculate and display areas
    cout << "Area of Rectangle: " << rect.Area() <<endl;
    cout << "Area of Triangle: " << trgl.Area() <<endl;
 
    return 0;
}
