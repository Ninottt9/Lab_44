#include"Grade.h"
#include<iostream>

Grade :: Grade ()
{

}

Grade :: Grade (int grade, Student student)
{

}

Grade :: ~Grade()
{

}

Student Grade :: getStudent() const
{
    return _student;
}

void Grade :: setStudent(Student student)
{
    _student = student;
}

void Grade :: print() const
{
    std :: cout << "Grade print value=" << _grade << "studentID=" << 3 << " << id <<"grades: ";
}