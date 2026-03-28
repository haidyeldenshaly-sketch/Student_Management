#include <iostream>
#include <vector>
#include <algorithm>

#include "Student.h"

using namespace std;

vector<Student> students;

void addStudent() {

    int id;
    string name;
    double gpa;

    cout << "Enter Student ID: ";
    cin >> id;

    auto it = find_if(students.begin(), students.end(),
        [id](Student& s) { return s.getId() == id; });

    if (it != students.end()) {

        cout << "Student ID already exists\n";
        return;
    }

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter GPA: ";
    cin >> gpa;

    if (gpa < 0 || gpa > 4) {

        cout << "Invalid GPA\n";
        return;
    }

    students.push_back(Student(id, name, gpa));

    cout << "Student added successfully\n";
}

void removeStudent() {

    int id;

    cout << "Enter ID: ";
    cin >> id;

    auto it = remove_if(students.begin(), students.end(),
        [id](Student& s) { return s.getId() == id; });

    if (it != students.end()) {

        students.erase(it, students.end());
        cout << "Student removed\n";
    }

    else {

        cout << "Student not found\n";
    }
}

void searchStudent() {

    int id;

    cout << "Enter ID: ";
    cin >> id;

    auto it = find_if(students.begin(), students.end(),
        [id](Student& s) { return s.getId() == id; });

    if (it != students.end())
        it->display();

    else
        cout << "Student not found\n";
}

void displayStudents() {

    if (students.empty()) {

        cout << "No students available\n";
        return;
    }

    for (auto& s : students)
        s.display();
}

void enrollCourse() {

    int id;
    string course;

    cout << "Enter Student ID: ";
    cin >> id;

    auto it = find_if(students.begin(), students.end(),
        [id](Student& s) { return s.getId() == id; });

    if (it == students.end()) {

        cout << "Student not found\n";
        return;
    }

    cout << "Enter Course: ";
    cin >> course;

    it->addCourse(course);

    cout << "Course added\n";
}

void showStudentCourses() {

    int id;

    cout << "Enter Student ID: ";
    cin >> id;

    auto it = find_if(students.begin(), students.end(),
        [id](Student& s) { return s.getId() == id; });

    if (it == students.end()) {

        cout << "Student not found\n";
        return;
    }

    it->showCourses();
}

void sortStudents() {

    sort(students.begin(), students.end(),

        [](Student& a, Student& b) {

            return a.getGpa() > b.getGpa();
        });

    cout << "Students sorted by GPA\n";
}

int main() {

    int choice;

    do {

        cout << "\n===== Student Management System =====\n";

        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Search Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Enroll Student in Course\n";
        cout << "6. Show Student Courses\n";
        cout << "7. Sort Students by GPA\n";
        cout << "8. Exit\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice) {

        case 1: addStudent(); break;
        case 2: removeStudent(); break;
        case 3: searchStudent(); break;
        case 4: displayStudents(); break;
        case 5: enrollCourse(); break;
        case 6: showStudentCourses(); break;
        case 7: sortStudents(); break;
        case 8: cout << "Goodbye\n"; break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 8);

    return 0;
}