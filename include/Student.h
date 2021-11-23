/**
    Program header
    @author Maksym Kazhaiev
*/

#pragma once
#include<vector>
#include "Grade.h"
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

    std :: vector <Grade *> getSubject() const;
    void setSubject(Grade *);

private:
    int _id;
    std :: vector <Grade *> _subjects;
};