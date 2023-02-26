
#include "cmath"
#include "triangle.h"

triangle::triangle(): first_side(0), second_side(0), third_side(0) {}

triangle::triangle(double a, double b, double c):
first_side(a), second_side(b), third_side(c){}

bool triangle::isTriangle() const {
    return ((first_side + second_side > third_side) && (second_side + third_side > first_side) && (first_side + third_side > second_side));
}

double *triangle::show() const {
    static double arr[3];
    arr[0] = first_side;
    arr[1] = second_side;
    arr[2] = third_side;
    return arr;
}

double triangle::getPerimetr() const {
    return first_side + second_side + third_side;
}

double triangle::getSquare() const {
    double temp = (first_side + second_side + third_side) / 2;
    return sqrt(temp* (temp - first_side) * (temp - second_side) * (temp - third_side));
}


