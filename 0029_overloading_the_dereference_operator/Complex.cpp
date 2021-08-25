#include "Complex.h"

std::ostream &operator<<(std::ostream &out, const Complex &c) {
    out << "(" << c.getReal() << "," << c.getImaginary() << ")";
    return out;
}

Complex::Complex(): real(0), imaginary(0) {

}

Complex Complex::operator*() const {
    return Complex(real, -imaginary);
}

Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {

}

Complex::Complex(const Complex &other) {
    std::cout << "Copy" << '\n';
    real = other.real;
    imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other) {
    real = other.real;
    imaginary = other.imaginary;

    return *this;
}

bool Complex::operator==(const Complex &other) const {
    return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex &other) const {
    return !(*this==other);
}