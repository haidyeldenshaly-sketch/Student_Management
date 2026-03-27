# 🎓 Student Course Management System

## 📌 Project Description

This is a **C++ console application** that allows users to manage students and their enrolled courses.
The system is built using **Object-Oriented Programming (OOP)** concepts and the **Standard Template Library (STL)**.

---

## 🎯 Objective

The goal of this project is to:

* Practice C++ programming
* Apply OOP concepts
* Use STL containers and algorithms
* Build a complete console-based system

---

## 🧠 Features

* ➕ Add Student
* ❌ Remove Student
* 🔍 Search Student by ID
* 📋 Display All Students
* 📚 Enroll Student in Course
* 📖 Show Student Courses
* 📊 Sort Students by GPA

---

## 🖥️ Example Menu

```
1. Add Student
2. Remove Student
3. Search Student
4. Display All Students
5. Enroll Student in Course
6. Show Student Courses
7. Sort Students by GPA
8. Exit
```

---

## 🧱 Technologies Used

* C++
* OOP (Classes, Inheritance, Encapsulation)
* STL (vector, map, set, etc.)
* Algorithms (sort, find_if, ...)

---

## 🏗️ System Design

### Classes:

* `Person` (Base Class)
* `Student` (Derived Class)

### Example:

```cpp
class Person {
protected:
    string name;
};

class Student : public Person {
private:
    int id;
    double gpa;
};
```

---

## ⚙️ Functional Requirements

* Each student has a unique ID
* GPA must be between 0.0 and 4.0
* No duplicate courses per student
* Handle invalid input properly

---

## 📊 UML Diagram

A UML diagram is included showing:

* Classes
* Attributes
* Methods
* Inheritance relationships

---

## ⭐ Bonus Features

* Save and load data from file
* Prevent duplicate courses using `set`
* Additional search options

---

## ▶️ How to Run

1. Open the project in any C++ compiler (e.g., CodeBlocks / Visual Studio)
2. Compile the code
3. Run the program
4. Use the menu to interact with the system

---

## 📁 Files Included

* `main.cpp`
* UML Diagram (PDF / Image)

---

## 👩‍💻 Author

Mirna Shawky

---

## ⚠️ Notes

This is an individual assignment. All code is written independently.

---
