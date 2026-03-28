#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <set>
#include <string>
#include <fstream>
using namespace std;

class Student : public Person {
private:
    int id;
    double gpa;
    set<string> courses;

public:
    Student(int i = 0, string n = "", double g = 0.0);

    int getId();
    double getGpa();

    void addCourse(string course);
    void showCourses();
    void display();

    // Bonus features
    void saveToFile(ofstream& out);
    void loadFromFile(ifstream& in);
};

#endif