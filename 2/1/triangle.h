#ifndef INDUSTRIAL_PROGRAMMENT_PRACTIC_TRIANGLE_H
#define INDUSTRIAL_PROGRAMMENT_PRACTIC_TRIANGLE_H


class triangle {
private:
    double first_side;
    double second_side;
    double third_side;

public:
    triangle();

    triangle(double a, double b, double c);

    bool isTriangle() const;

    double *show() const;

    double getPerimetr() const;

    double getSquare() const;

};


#endif //INDUSTRIAL_PROGRAMMENT_PRACTIC_TRIANGLE_H
