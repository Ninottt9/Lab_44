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

/*std :: vector <Grade *> Student :: getSubject() const
{
    return _subjects;
}*/

void Student :: addGrade(int grade)
{
    std :: cout << grade <<" Nu\n";
    _grades.push_back(grade);
}

void Student :: print() const
{
    std :: cout << "Student print ID=" << _id <<" grades: ";
    for(long unsigned int i=0; i < _grades.size(); i++)
    {
        std :: cout << _grades[i] <<" ";
    }
    std :: cout<<"\n";
}