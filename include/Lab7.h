/**
    Node header
    @file node.cpp, twoWaysList.cpp
    @author Maksym Kazhaiev
*/

#pragma once
#include<list>
#include<iostream>

class Grade; 

class Student
{
public:
    Student();
    Student(int);
    ~Student();

    void print() const;

    int getId() const;
    void setId(int);

    std :: list <Grade *> getSubject() const;
    void setSubject(Grade *);

private:
    int _id;
    std :: list <Grade *> _subjects;
};

class Grade
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