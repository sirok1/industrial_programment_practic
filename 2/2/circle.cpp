#include "circle.h"
#include "cmath"

circle::circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

void circle::set_circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

float circle::square() {
    return M_PI * radius * radius;
}

bool circle::triangle_around(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    float R = (a * b * c) / (4 * S);
    return radius >= R;
}

bool circle::triangle_in(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float r = sqrt((p - a) * (p - b) * (p - c) / p);
    return radius <= r;
}

bool circle::check_circle(float r, float x_cntr, float y_cntr) {
    float temp = sqrt(pow(x_center - x_cntr, 2) + pow(y_center - y_cntr, 2));
    return temp <= radius + r;
}
