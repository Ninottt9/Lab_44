#include"Lab7.h"

Student :: Student()
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

int Student :: getId() const
{
    return _id;
}

void Student :: setId(int id)
{
    _id = id;
}

std :: vector <Grade *> Student :: getSubject() const
{
    return _subjects;
}

void Student :: setSubject(Grade *grade)
{
    _subjects.push_back(grade);
}

void Student :: print() const
{
    std :: cout << "Student print ID=" << _id <<" grades: ";
    for(int i=0; i < _subjects.size(); i++)
    {
        std :: cout << _subjects[i] -> getGrade()<<" ";
    }
    std :: cout<<"\n";
}