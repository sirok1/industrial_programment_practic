#include <iostream>

using namespace std;

class Calculator {
public:
    static double divide(double numerator, double denominator) {
        if (denominator == 0)
            throw runtime_error("Divide by zero exception");
        return numerator / denominator;
    }
};

int main() {
    try {
        double result = Calculator::divide(10, 0);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        double numerator, denominator;
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;

        double result = Calculator::divide(numerator, denominator);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
