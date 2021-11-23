/**
    Node header
    @file node.cpp, twoWaysList.cpp
    @author Maksym Kazhaiev
*/
#pragma once
#include "Student.h"
#include <list>

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
    std :: list <int> _grades;
    Student _student;
};