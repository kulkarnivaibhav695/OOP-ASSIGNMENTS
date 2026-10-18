/*
NAME :- VAIBHAV KULKARNI
PRN  :- 1262253985
*/

#include <iostream>
using namespace std;

class Shape {
    const double PI = 3.14159;

public:
    double square(double s) {
        return s * s;
    }

    double rectangle(double l, double b) {
        return l * b;
    }

    double triangle(double b, double h) {
        return 0.5 * b * h;
    }

    double circle(double r) {
        return PI * r * r;
    }

    double sphere(double r) {
        return 4 * PI * r * r;
    }

    double cylinder(double r, double h) {
        return 2 * PI * r * (r + h);
    }
};

int main() {
    Shape obj;
    int choice;
    double s, l, b, h, r, area;

    cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Circle\n5. Sphere\n6. Cylinder\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter side: ";
            cin >> s;
            area = obj.square(s);
            break;

        case 2:
            cout << "Enter length and breadth: ";
            cin >> l >> b;
            area = obj.rectangle(l, b);
            break;

        case 3:
            cout << "Enter base and height: ";
            cin >> b >> h;
            area = obj.triangle(b, h);
            break;

        case 4:
            cout << "Enter radius: ";
            cin >> r;
            area = obj.circle(r);
            break;

        case 5:
            cout << "Enter radius: ";
            cin >> r;
            area = obj.sphere(r);
            break;

        case 6:
            cout << "Enter radius and height: ";
            cin >> r >> h;
            area = obj.cylinder(r, h);
            break;

        default:
            cout << "Invalid choice";
            return 0;
    }

    cout << "Area = " << area << endl;

    return 0;
}
