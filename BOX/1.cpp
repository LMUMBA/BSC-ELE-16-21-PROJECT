#pragma once
#include <iostream>
using namespace std;
class Box {
    public:
        Box();
        Box(const double newlength, const double, const double newHeight);

        ~Box();
        double GetVolume();
        void SetLength(double len);
        void SetBreadth(double bre);
        void SetHeight(double hei);

        //Overload + operator to add two Box objects.
        Box operator+(const Box& b);

    private:
        double length;      //Length of a box
        double breadth;     //Breadth of a box
        double height;      //Height of a box

        };

        #pragma once
#include "Box.h"
Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;

}
Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}
Box::~ Box(){

}
double Box::GetVolume(){
    return length * breadth * height;
}
void Box::SetLength(double len){
    length = len;
}
void Box::SetBreadth(double bre){
    breadth = bre;
}
void Box::SetHeight(double hei){

}
//Overload + operator to add two Box objects.
Box Box::operator(const Box& b){
    Box box;

    box.length = this->length + b.length;
    box.breadth = this-> breadth + b.breadth;
    box.height = this-> height + b.height;
    return box;
}

// Main function for the program
int main(){
    Box Box1;               // Declare Box1 of type Box
    Box Box2;               // Declare Box2 of type Box
    Box Box3;               // Declare Box3 of type Box
    double volume = 0.0;    //Store the volume of a box here

    //box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHieght(5.0);

    //box 2 specification
    Box2.SetLength(12.0);
    Box2.SetLength(13.0);
    Box2.SetHeight(10.0);

    //volume of box 1
    volume = Box1.GetVolume();
    cout<< "Volume of Box2 :" << volume <<endl;

    //volume of box 2
    volume = Box2.GetVolume();
    cout<< "Volume of Box2 :" << volume <<endl;

    //Add two objects as follows:
    Box3 = Box1 + Box2;

    //volume of box 3
    volume = Box3.GetVolume();
    cout << "Volume of Box3 :" << volume <<endl;

    return 0;


}