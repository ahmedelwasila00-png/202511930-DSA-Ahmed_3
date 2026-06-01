#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

using namespace std; // Easy way to avoid writing std:: everywhere

// Student structure
struct Student {
    int id;
    string name;
    int age;
    string course;
};

// Functions for the project
void addStudent(vector<Student> &students);
void displayStudents(vector<Student> &students);
void searchStudent(vector<Student> &students);
void updateStudent(vector<Student> &students);
void deleteStudent(vector<Student> &students);

#endif