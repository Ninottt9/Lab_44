/**
    Node header
    @file node.cpp, twoWaysList.cpp
    @author Maksym Kazhaiev
*/
#pragma once
#include "Student.h"
#include <list>

class Grade
{
public:
    Grade ();
    Grade (int, Student);
	~Grade();

    void print();

    Student getStudent();
    void setStudent(Student);

    int getGrade();
    void setGrade(int);
private:
    std :: list <int> _grades;
    Student _student;
};