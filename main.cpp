#include <iostream>
#include "area_functions.hpp"
using namespace std;

int main( ) {

    char letter;
    double result;

    cout << "Enter the chosen figure (s, r, t or c): ";
    cin >> letter;

    switch (letter) {
    case 's':
        double length;
        double width;
        cout << "Insert the length and width: ";
        cin >> length;
        cin >> width;
        result = sqr_rectangle(length, width);
        cout << "Square rectangle area: " << result << endl;
        cin >> width;
        break;

    case 'r':
        double length1;
        double width1;
        cout << "Insert the length and width: ";
        cin >> length1 >> width1;
        result = sqr_rectangle(length1, width1);
        cout << "Rectangle area: " << result << endl;
        break;

    case 't':
        double base;
        double height;
        cout << "Insert the base and height: ";
        cin >> base >> height;
        result = triangle(base, height);
        cout << "Triangle area: " << result << endl;
        break;

    case 'c':
        double radius;
        cout << "Insert the radius: ";
        cin >> radius;
        result = circle(radius);
        cout << "Circle area: " << result << endl;
        break;

    default:
        cout << "Invalid option" << endl;
        break;
    }

    return 0;
}