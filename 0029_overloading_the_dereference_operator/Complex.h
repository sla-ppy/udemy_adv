#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // constructor
    Complex();
    // member initializer
    Complex(double real, double imaginary);
    // copy constructor
    Complex(const Complex &other);

    // operator overload
    const Complex &operator=(const Complex &other);

    //
    double getReal() const {
        return real;
    }
    double getImaginary() const {
        return imaginary;
    }

    bool operator==(const Complex &other) const;
    bool operator!=(const Complex &other) const;

    Complex operator*() const;
};

std::ostream &operator<<(std::ostream &out, const Complex &c);

#endif // COMPLEX_H
