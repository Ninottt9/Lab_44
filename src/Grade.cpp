#include"Lab7.h"

Grade :: Grade ()
{
    _student = 0;
    _grade = 0;
}

Grade :: Grade (int grade, Student *student)
{
    _student = student;
    _grade = grade;
    _student -> addGrade(grade);
}

Grade :: ~Grade()
{
    //delete [] list;
}

Student * Grade :: getStudent()
{
    return _student;
}

void Grade :: setStudent(Student * student)
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
    std :: cout << "Grade print value=" << getGrade() << " studentID=" << _student -> getId() <<"\n";
}