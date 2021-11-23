/**
    Node header
    @file node.cpp, twoWaysList.cpp
    @author Maksym Kazhaiev
*/
#pragma once
#include "Student.h"

class Grade
{
public:
    Grade ();
    Grade (int, Student);
	~Grade();

    void print() const;

    Student getStudent() const;
    void setStudent(Student);
private:
    int _grade;
    Student _student;
};