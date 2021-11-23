/**
    Node header
    @file node.cpp, twoWaysList.cpp
    @author Maksym Kazhaiev
*/

#pragma once
#include<vector>
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

    //std :: vector <Grade *> getSubject() const;
    void addGrade(int);

private:
    int _id;
    std :: vector <int> _grades;
};

class Grade
{
public:
    Grade ();
    Grade (int, Student *);
	~Grade();

    void print() const;

    Student * getStudent();
    void setStudent(Student *);

    int getGrade() const;
    void setGrade(int);
private:
    int _grade;
    Student *_student;
};