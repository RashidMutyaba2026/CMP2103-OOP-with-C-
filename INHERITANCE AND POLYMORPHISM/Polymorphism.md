# POLYMORPHISM IN C++

## 1. Definition of Polymorphism

Polymorphism is one of the major concepts of Object-Oriented Programming
(OOP) in C++. The word *polymorphism* means **"many forms."** It allows
the same function name, interface, or operation to behave differently
depending on the object or arguments involved.

Polymorphism helps programmers write flexible and reusable code. Instead
of creating separate function calls for every type of object, a common
interface can be used to perform different operations.

For example, in an employee management system, a permanent employee may
receive a fixed salary, while a casual employee may be paid according to
the number of hours worked. Polymorphism allows both types of employees
to use the same function name while producing different results.

## 2. Types of Polymorphism in C++

There are two main types of polymorphism in C++.

### A. Compile-time polymorphism

Compile-time polymorphism occurs when the compiler determines which
function to use during compilation. It can be achieved through:

-   **Function overloading:** Several functions have the same name but
    different parameter lists.
-   **Operator overloading:** An operator is given a suitable meaning
    for a user-defined type.

### B. Run-time polymorphism

Run-time polymorphism occurs when the function to execute is determined
while the program is running. It is commonly achieved through function
overriding and virtual functions.

The employee salary example demonstrates run-time polymorphism.

## 3. Example Scenario

Consider an employee management program with a general Employee class
and two derived classes: PermanentEmployee and CasualEmployee.

The base class defines a virtual function for calculating an employee's
pay. The permanent employee class overrides this function to return a
fixed salary of 3,000,000. The casual employee class overrides the same
function to calculate payment based on hours worked and the hourly rate.

The casual employee in the example works 40 hours and earns 10,000 per
hour. Therefore, the payment is calculated as:

**Pay = Hours worked × Hourly rate**

**Pay = 40 × 10,000 = 400,000**

The program uses a base-class pointer to refer first to the permanent
employee and then to the casual employee. Each time the payment function
is called, C++ runs the implementation belonging to the actual object
being referenced.

## 4. Explanation of the Example

### A. Header library

The program uses the input/output library to display the employees'
payment information on the screen. The standard namespace is used to
avoid writing the standard-library prefix before common names.

### B. Base class

The Employee class is the base class. It declares a virtual function for
calculating pay. A virtual function allows a derived class's version of
the function to be selected at run time when the function is called
through a base-class pointer or reference.

The class also has a virtual destructor. This is good practice when a
base class is designed to be used polymorphically, particularly if
objects may be deleted through base-class pointers.

### C. Permanent employee class

The PermanentEmployee class inherits from Employee and overrides the
payment function. Its implementation returns a fixed salary of
3,000,000.

This means that when the payment function is called for a permanent
employee object, the program uses the permanent employee's
implementation.

### D. Casual employee class

The CasualEmployee class also inherits from Employee but calculates
payment differently.

It stores the number of hours worked and the hourly rate. Its
constructor initializes these values when a casual employee object is
created. The overridden payment function multiplies the hours worked by
the hourly rate and returns the result.

### E. Creating employee objects

The program creates one permanent employee object and one casual
employee object. The casual employee is initialized with 40 working
hours and an hourly rate of 10,000.

### F. Using a base-class pointer

The program declares a pointer of the base-class type. This pointer can
refer to objects of Employee or its derived classes.

First, the pointer is made to refer to the permanent employee object.
Calling the payment function through the pointer executes the permanent
employee's implementation and produces a salary of 3,000,000.

Next, the pointer is made to refer to the casual employee object.
Calling the same function through the same pointer executes the casual
employee's implementation and produces a payment of 400,000.

This demonstrates run-time polymorphism: the same function call produces
different behaviour depending on the object being referenced.

## 5. Expected Output

The program displays:

-   Permanent employee pay: 3,000,000
-   Casual employee pay: 400,000

Depending on the output formatting, the permanent employee's salary may
appear in scientific notation as 3e+06. This is another way of
representing 3,000,000.

## 6. Advantages of Polymorphism

1.  **Code reusability:** A common interface can be used for different
    classes.
2.  **Flexibility:** Different objects can provide their own
    implementations of a common function.
3.  **Easy maintenance:** Individual implementations can be changed
    without changing every function call.
4.  **Extensibility:** New employee types can be introduced with their
    own salary calculations.
5.  **Reduced code duplication:** Common calling code can work with
    different object types.

## Conclusion

Polymorphism is an important feature of C++ that allows one interface or
function name to represent different behaviours. In the employee salary
example, the permanent and casual employee classes implement the payment
function differently. A virtual function enables run-time polymorphism,
while overriding provides each derived class with its own
implementation. A base-class pointer can refer to either object and
execute the appropriate function at run time. This makes programs more
flexible, reusable, and easier to extend.
