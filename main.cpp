#include <iostream>
using namespace std;

// Class template for addition and multiplication
template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T a, T b) : num1(a), num2(b) {}

    T add() const {
        return num1 + num2;
    }

    T multiply() const {
        return num1 * num2;
    }
};

// Function template to find the maximum of two values
template <typename T>
T findMaximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "CLASS TEMPLATE - CALCULATOR" << endl;

    Calculator<int> intCalc(10, 5);
    cout << "\nInteger values: 10, 5" << endl;
    cout << "Addition = " << intCalc.add() << endl;
    cout << "Multiplication = " << intCalc.multiply() << endl;

    Calculator<double> doubleCalc(2.5, 1.5);
    cout << "\nDouble values: 2.5, 1.5" << endl;
    cout << "Addition = " << doubleCalc.add() << endl;
    cout << "Multiplication = " << doubleCalc.multiply() << endl;

    cout << "\nFUNCTION TEMPLATE - FIND MAXIMUM" << endl;
    cout << "Maximum Integer (10, 20) = "
         << findMaximum(10, 20) << endl;
    cout << "Maximum Float (4.5, 7.2) = "
         << findMaximum(4.5f, 7.2f) << endl;
    cout << "Maximum Character ('A', 'Z') = "
         << findMaximum('A', 'Z') << endl;

    return 0;
}
