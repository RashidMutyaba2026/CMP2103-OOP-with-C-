#include <iostream>

using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Constructor to initialize default values
    Rectangle() : width(0.0), length(0.0) {}

    // Setters
    void setWidth(double w) {
        if (w >= 0) width = w;
    }

    void setLength(double l) {
        if (l >= 0) length = l;
    }

    // Getters
    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    // Calculation methods
    double calculateArea() const {
        return width * length;
    }

    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect;

    // Set dimensions
    rect.setWidth(5.5);
    rect.setLength(10.0);

    // Retrieve and display dimensions
    cout << "--- Rectangle Dimensions ---" << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Length: " << rect.getLength() << endl;

    // Calculate and display area and perimeter
    cout << "\n--- Calculations ---" << endl;
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}
