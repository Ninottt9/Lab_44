/**
    Node header
    @file node.cpp, twoWaysList.cpp
    @author Maksym Kazhaiev
*/
#pragma once
#include "Student.h"

class Grade : public
Student
{
public:
    Grade ();
    Grade (int, Student);
	~Grade();

    void print() const;

    Student getStudent();
    void setStudent(Student);

    int getGrade() const;
    void setGrade(int);
private:
    int _grade;
    Student _student;
};