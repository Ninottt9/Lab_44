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
    _grades.push_back(grade);
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

int Grade :: getGrade()
{
    return _grades.front();
}

void Grade :: setGrade(int grade)
{
    _grades.push_back(grade);
}

void Grade :: print()
{
    std :: cout << "Grade print value=" << _grades.front() << "studentID=" << _student.getId() <<"\n";
}