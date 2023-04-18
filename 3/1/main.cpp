#include "eq2.h"
#include "iostream"
using namespace std;

int main () {
    double a, b, c, a1, b1, c1;
    cout << "Enter the coefficients a, b, c: " << endl;
    cin >> a >> b >> c;
    cout << "Enter the coefficients a, b, c for another equation: " << endl;
    cin >> a1 >> b1 >> c1;

    eq2 first_equation (a, b, c);
    double x = first_equation.find_X();
    first_equation.find_Y(x);

    eq2 second_equation (a1, b1, c1);
    double x1 = second_equation.find_X();
    second_equation.find_Y(x1);

    eq2 summ = first_equation + second_equation;
    summ.getCoefficients();

    return 0;
}