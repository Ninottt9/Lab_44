#include"Student.h"
#include<iostream>

Student::Student()
{
	_id = 0;
}

Student :: Student(int id)
{
    _id = id;
}

Student :: ~Student()
{

}

void Student :: print() const
{
    std :: cout << "Student print ID=" << _id <<"grades: ";
}