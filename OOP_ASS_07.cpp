/*
NAME :- VAIBHAV KULKARNI
PRN  :- 1262253985
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double calculateAverage(const vector<double>& grades) {
    double sum = 0;
    for (vector<double>::const_iterator it = grades.begin(); it != grades.end(); ++it) {
        sum += *it;
    }
    return sum / grades.size();
}

double findMinimum(const vector<double>& grades) {
    double minimum = *grades.begin();
    for (vector<double>::const_iterator it = grades.begin(); it != grades.end(); ++it) {
        if (*it < minimum) {
            minimum = *it;
        }
    }
    return minimum;
}

double findMaximum(const vector<double>& grades) {
    double maximum = *grades.begin();
    for (vector<double>::const_iterator it = grades.begin(); it != grades.end(); ++it) {
        if (*it > maximum) {
            maximum = *it;
        }
    }
    return maximum;
}

int main() {
    vector<double> grades;
    int n;
    double grade;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> grade;

        if (grade < 0 || grade > 100) {
            cout << "Invalid grade. Enter a grade between 0 and 100." << endl;
            return 1;
        }

        grades.push_back(grade);
    }

    cout << "\nGrades: ";
    for (vector<double>::const_iterator it = grades.begin(); it != grades.end(); ++it) {
        cout << *it << " ";
    }

    cout << "\nAverage Grade: " << calculateAverage(grades) << endl;
    cout << "Minimum Grade: " << findMinimum(grades) << endl;
    cout << "Maximum Grade: " << findMaximum(grades) << endl;

    return 0;
}
