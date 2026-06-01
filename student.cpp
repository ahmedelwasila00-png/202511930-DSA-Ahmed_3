#include <iostream>
#include "student.h"

using namespace std;

// 1. Function to add a new student
void addStudent(vector<Student> &students) {
    Student newStudent;
    
    cout << "\n--- Add New Student ---\n";
    cout << "Enter ID: ";
    cin >> newStudent.id;
    
    cout << "Enter Name: ";
    cin.ignore(); // Clears the input buffer before reading strings
    getline(cin, newStudent.name);
    
    cout << "Enter Age: ";
    cin >> newStudent.age;
    
    cout << "Enter Course: ";
    cin.ignore();
    getline(cin, newStudent.course);
    
    students.push_back(newStudent); // Adds the student to the vector
    cout << "Student added successfully!\n";
}

// 2. Function to display all students
void displayStudents(vector<Student> &students) {
    cout << "\n--- List of Students ---\n";
    if (students.empty()) {
        cout << "No students found in the system.\n";
        return;
    }
    
    for (int i = 0; i < students.size(); i++) {
        cout << "ID: " << students[i].id 
             << " | Name: " << students[i].name 
             << " | Age: " << students[i].age 
             << " | Course: " << students[i].course << endl;
    }
}

// 3. Function to search for a student by ID
void searchStudent(vector<Student> &students) {
    cout << "\n--- Search Student ---\n";
    int searchId;
    cout << "Enter ID to search: ";
    cin >> searchId;
    
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == searchId) {
            cout << "Student Found!\n";
            cout << "ID: " << students[i].id << "\nName: " << students[i].name 
                 << "\nAge: " << students[i].age << "\nCourse: " << students[i].course << endl;
            return; // Exit the function as soon as we find the student
        }
    }
    cout << "Student with ID " << searchId << " not found.\