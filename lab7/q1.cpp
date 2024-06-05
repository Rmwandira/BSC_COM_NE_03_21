#ifndef RECTANGLE_H
#define RECTANGLE_H



class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    ~Rectangle(); // Destructor

    // Accessor methods
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    // Member function to calculate area
    float calculateArea() const;
};

#endif // RECTANGLE_H







Rectangle::Rectangle() : length(0), width(0) {}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}







#include <iostream>


int main() {
    // Create an instance of Rectangle
    Rectangle rect;

    // Prompt user to enter length and width
    float length, width;
    std::cout << "Enter length of rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of rectangle: ";
    std::cin >> width;

    // Set length and width using accessor methods
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate area and output
    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
    
}



