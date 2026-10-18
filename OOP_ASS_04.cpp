/*
NAME :- VAIBHAV KULKARNI
PRN  :- 1262253985
*/

#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int add(int a, int b) {
    return a + b;
}

Point add(Point p1, Point p2) {
    return Point(p1.x + p2.x, p1.y + p2.y);
}

int sub(int a, int b) {
    return a - b;
}

Point sub(Point p1, Point p2) {
    return Point(p1.x - p2.x, p1.y - p2.y);
}

int mul(int a, int b) {
    return a * b;
}

Point mul(Point p1, Point p2) {
    return Point(p1.x * p2.x, p1.y * p2.y);
}

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << sub(a, b) << endl;
    cout << "Multiplication: " << mul(a, b) << endl;

    int x1, y1, x2, y2;

    cout << "Enter coordinates of first point: ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point: ";
    cin >> x2 >> y2;

    Point p1(x1, y1), p2(x2, y2);

    cout << "Point Addition: ";
    add(p1, p2).display();

    cout << "Point Subtraction: ";
    sub(p1, p2).display();

    cout << "Point Multiplication: ";
    mul(p1, p2).display();

    return 0;
}
