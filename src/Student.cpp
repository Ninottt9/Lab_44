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

int Student :: getId()
{
    return _id;
}

void Student :: setId(int id)
{
    _id = id;
}

void Student :: print() const
{
    std :: cout << "Student print ID=" << _id <<" grades: " << "\n";
}