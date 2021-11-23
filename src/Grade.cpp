#include<iostream>
#include"Grade.h"
#include"Student.h"

Grade :: Grade ()
{
    _student = 0;
}

Grade :: Grade (int grade, Student student)
{
    _student = student;
    _grade = grade;
}

Grade :: ~Grade()
{
    //delete [] list;
}

Student Grade :: getStudent()
{
    return _student;
}

void Grade :: setStudent(Student student)
{
    _student = student;
}

int Grade :: getGrade() const
{
    return _grade;
}

void Grade :: setGrade(int grade)
{
    _grade = grade;
}

void Grade :: print() const
{
    std :: cout << "Grade print value=" << getGrade() << " studentID=" << getId() <<"\n";
}