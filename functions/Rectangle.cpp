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

// Default constructor implementation
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

// Accessor methods implementation
void Rectangle::setLength(float len) {
    length = len;
}

void Rectangle::setWidth(float wid) {
    width = wid;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

// Calculate Area function implementation
float Rectangle::calculateArea() const {
    return length * width;
}

#endif