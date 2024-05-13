#ifndef Rectangle_h
#define Rectangle_h
 
class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Accessor methods
    void setLength(float);
    void setWidth(float);
    float getLength() const;
    float getWidth() const;

    // Member function to calculate area
    float calculateArea() const;
};