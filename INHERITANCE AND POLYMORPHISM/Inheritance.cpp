#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;
    int speed;

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    int doors;

    void displayCar() {
        displayVehicle();
        cout << "Number of doors: " << doors << endl;
    }
};

int main() {
    Car myCar;

    myCar.brand = "Toyota";
    myCar.speed = 120;
    myCar.doors = 4;

    myCar.displayCar();

    return 0;
}