#include "figure.h"
#include "iostream"

using namespace std;

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4;
    for (int i = 1; i < 4; i++) {
        cout << "enter the coordinates of the first point (x & y):" << endl;
        cin >> x1 >> y1;
        cout << "enter the coordinates of the second point (x & y):" << endl;
        cin >> x2 >> y2;
        cout << "enter the coordinates of the third point (x & y):" << endl;
        cin >> x3 >> y3;
        cout << "enter the coordinates of the fourth point (x & y):" << endl;
        cin >> x4 >> y4;

        figure fig(x1, x2, x3, x4, y1, y2, y3, y4);
        float* temp = fig.show();
        cout << "Coordinates of the figure (x y)" << endl;
        cout << temp[0] << " " << temp[4] << endl;
        cout << temp[1]<< " " << temp[5] << endl;
        cout << temp[2]<< " " << temp[6] << endl;
        cout << temp[3]<< " " << temp[7] << endl;
        cout << "The perimeter of the figure: " << temp[8] << endl;
        cout << "The area of the figure: " << temp[9] << endl;
        if (fig.is_square()) {
            cout << "The figure is a square: " << endl;
        } else if (fig.is_romb()) {
            cout << "The figure is a rhomb: " << endl;
        } else if (fig.is_prug()) {
            cout << "The figure is a rectangle: " << endl;
        } else {
            cout << "The figure is a quadrilateral: " << endl;
        }

        if (fig.is_in_circle()) {
            cout << "The circle can be included in this figure" << endl;
        } else {
            cout << "The circle cannot be included in this figure" << endl;
        }
        if (fig.is_out_circle()) {
            cout << "This figure can be included in circle" << endl;
        } else {
            cout << "This figure cannot be included in circle" << endl;
        }
    }
    return 0;
}