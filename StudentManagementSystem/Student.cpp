#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(int i, string n, double g) : Person(n) {
    id = i;
    gpa = g;
}

int Student::getId() {
    return id;
}

double Student::getGpa() {
    return gpa;
}

void Student::addCourse(string course) {
    courses.insert(course); // set prevents duplicates
}

void Student::showCourses() {
    if (courses.empty()) {
        cout << "No courses enrolled\n";
        return;
    }
    for (auto c : courses)
        cout << c << endl;
}

void Student::display() {
    cout << "ID: " << id
        << " | Name: " << name
        << " | GPA: " << gpa << endl;
}

// Bonus: Save student to file
void Student::saveToFile(ofstream& out) {
    out << id << " " << name << " " << gpa << " " << courses.size() << " ";
    for (auto c : courses)
        out << c << " ";
    out << "\n";
}

// Bonus: Load student from file
void Student::loadFromFile(ifstream& in) {
    int courseCount;
    in >> id >> name >> gpa >> courseCount;
    courses.clear();
    for (int i = 0; i < courseCount; i++) {
        string c;
        in >> c;
        courses.insert(c);
    }
}