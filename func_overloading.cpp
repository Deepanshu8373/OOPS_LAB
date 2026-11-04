
#include <iostream>
using namespace std;

// Function for integer addition
int add(int a, int b) {
    return a + b;
}

// Function for float addition
float add(float a, float b) {
    return a + b;
}

// Function for double addition
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Integer Addition: " << add(10, 20) << endl;

    cout << "Float Addition: " << add(5.5f, 2.5f) << endl;

    cout << "Double Addition: " << add(10.25, 5.75) << endl;

    return 0;
}
