#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int roll;
    float gpa;
};
int main() {
    Student s1, s2;

    cout << "Enter first student name: ";
    cin >> s1.name;

    cout << "Enter first student roll number: ";
    cin >> s1.roll;

    cout << "Enter first student GPA: ";
    cin >> s1.gpa;

    cout << "\nEnter second student name: ";
    cin >> s2.name;

    cout << "Enter second student roll number: ";
    cin >> s2.roll;

    cout << "Enter second student GPA: ";
    cin >> s2.gpa;

    cout << "\nGPA Comparison" << endl;

    if (s1.gpa > s2.gpa) {
        cout << s1.name << " has the higher GPA.";
    }
    else if (s2.gpa > s1.gpa) {
        cout << s2.name << " has the higher GPA.";
    }
    else {
        cout << "Both students have equal GPA";
    }

return 0;
}