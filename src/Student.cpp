#include"Lab7.h"

Student :: Student()
{
	_id = 0;
    _count = 0;
    _subjects = 0;
}

Student :: Student(int id)
{
    _id = id;
    _count = 0;
    _subjects = 0;
}

Student :: ~Student()
{
    delete [] _subjects;
}

int Student :: getId() const
{
    return _id;
}

void Student :: setId(int id)
{
    _id = id;
}

/*std :: vector <Grade *> Student :: getSubject() const
{
    return _subjects;
}*/

void Student :: setSubject(Grade *grade)
{
    Grade ** temp = _subjects; 
    _subjects = new Grade;
    _count++;
    for(int i=0; i<=count; i++)
    {
        _subjects[i] = 
    }
}

void Student :: print() const
{
    std :: cout << "Student print ID=" << _id <<" grades: ";
    //std :: cout << _subjects.size()<<"\n";

    for(int i=0; i < _subjects.size(); i++)
    {
        std :: cout << _subjects[i] -> getGrade()<<" ";
    }
    std :: cout<<"\n";
}