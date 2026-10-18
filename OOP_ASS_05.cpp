/*
NAME :- VAIBHAV KULKARNI
PRN  :- 1262253985
*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;

    virtual ~Shape() {
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    Shape* s;

    s = &c;
    s->draw();

    s = &r;
    s->draw();

    Shape* shapes[2] = {&c, &r};

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    return 0;
}
