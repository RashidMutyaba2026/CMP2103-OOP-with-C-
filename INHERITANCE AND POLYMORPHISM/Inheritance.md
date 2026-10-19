# INHERITANCE IN C++

## 1. Definition of Inheritance

Inheritance is one of the major concepts of Object-Oriented Programming
(OOP) in C++. It is a mechanism in which one class acquires the
properties and functions of another class.

The class whose members are inherited is called the **base class** or
**parent class**, while the class that inherits them is called the
**derived class** or **child class**.

Inheritance promotes code reusability because programmers can create new
classes from existing classes without rewriting all their functionality.

For example, a car is a type of vehicle. A vehicle may have a brand and
speed, while a car may have additional features such as the number of
doors. Inheritance allows the car class to reuse the common features of
the vehicle class.

## 2. Types of Inheritance in C++

The main types of inheritance are:

1.  **Single inheritance:** One derived class inherits from one base
    class.
2.  **Multiple inheritance:** One derived class inherits from two or
    more base classes.
3.  **Multilevel inheritance:** A class inherits from a derived class,
    forming a chain of inheritance.
4.  **Hierarchical inheritance:** Two or more derived classes inherit
    from the same base class.
5.  **Hybrid inheritance:** A combination of two or more types of
    inheritance.

## 3. Example Scenario

Consider a program that represents vehicles and cars.

The base class, Vehicle, contains common information such as the
vehicle's brand and speed. It also has a function that displays this
information.

The derived class, Car, inherits the common information and display
function from Vehicle. It adds its own information about the number of
doors and has a function that displays the complete car details.

When a car object is created, values are assigned to its brand, speed,
and number of doors. Calling its display function shows the vehicle
information inherited from the base class together with the car-specific
information.

## 4. Explanation of the Example

### A. Header libraries

The program uses the input/output library to display information on the
screen and the string library to store text such as a vehicle's brand.
The standard namespace is used to avoid writing the standard-library
prefix before common names.

### B. Base class

The Vehicle class is the base class. It stores the brand and speed as
public data members and provides a function that displays those values.

Because these members are public, they can be accessed by an object of
the derived class.

### C. Derived class

The Car class inherits publicly from Vehicle. This means it can use the
base class's public data members and display function.

The Car class also introduces a member for the number of doors and a
function that displays the car's information. That function first uses
the inherited display functionality and then displays the number of
doors.

### D. Creating and using an object

The program creates a car object and assigns it a brand, speed, and
number of doors. It then calls the car's display function.

The function displays the brand, speed, and number of doors. This
demonstrates that the derived class can use inherited members as well as
its own members.

## 5. Expected Output

The program displays the following information:

-   Brand: Toyota
-   Speed: 120 km/h
-   Number of doors: 4

## 6. Advantages of Inheritance

1.  **Code reusability:** Derived classes can reuse members of existing
    classes.
2.  **Reduced duplication:** Common functionality does not need to be
    rewritten in every class.
3.  **Easy maintenance:** Shared features can be updated in the base
    class.
4.  **Extensibility:** New classes can be created by extending existing
    classes.
5.  **Logical organization:** Inheritance represents relationships
    between related classes.

## Conclusion

Inheritance is an important feature of C++ that allows one class to
acquire and extend the features of another class. In the example, the
Car class inherits the brand, speed, and display functionality from the
Vehicle class while adding its own information about the number of
doors. This demonstrates single inheritance and shows how inheritance
promotes code reuse, reduces duplication, and makes programs easier to
maintain.
