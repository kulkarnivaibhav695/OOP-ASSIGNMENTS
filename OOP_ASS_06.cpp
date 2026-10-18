/*
NAME :- VAIBHAV KULKARNI
PRN  :- 1262253985
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void writeToFile(ofstream &out) {
        out << rollNo << endl;
        out << name << endl;
        out << marks << endl;
    }

    bool readFromFile(ifstream &in) {
        if (!(in >> rollNo))
            return false;

        in.ignore();
        getline(in, name);

        if (!(in >> marks))
            return false;

        in.ignore();
        return true;
    }
};

int main() {
    Student s[100];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of students" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;
        s[i].input();
    }

    ofstream outFile("students.txt");

    if (!outFile) {
        cout << "Unable to open file for writing" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        s[i].writeToFile(outFile);
    }

    outFile.close();

    Student loadedStudents[100];
    int count = 0;

    ifstream inFile("students.txt");

    if (!inFile) {
        cout << "Unable to open file for reading" << endl;
        return 1;
    }

    while (count < 100 && loadedStudents[count].readFromFile(inFile)) {
        count++;
    }

    inFile.close();

    cout << "\nStudent Details Read From File\n";

    for (int i = 0; i < count; i++) {
        loadedStudents[i].display();
        cout << endl;
    }

    ofstream resultFile("students_copy.txt");

    if (!resultFile) {
        cout << "Unable to open output file" << endl;
        return 1;
    }

    for (int i = 0; i < count; i++) {
        loadedStudents[i].writeToFile(resultFile);
    }

    resultFile.close();

    cout << "Data saved to students.txt and students_copy.txt" << endl;

    return 0;
}
