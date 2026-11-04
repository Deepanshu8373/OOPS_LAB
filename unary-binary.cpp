
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void getData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Unary operator overloading (-)
    void operator-() {
        real = -real;
        imag = -imag;
    }

    // Binary operator overloading (+)
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "Enter second complex number:\n";
    c2.getData();

    // Binary operator
    c3 = c1 + c2;
    cout << "\nAddition: ";
    c3.display();

    // Unary operator
    -c1;
    cout << "Unary Negation: ";
    c1.display();

    return 0;
}
