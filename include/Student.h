/**
    Program header
    @author Maksym Kazhaiev
*/

#pragma once

class Student
{
public:
    Student();
    Student(int);
    ~Student();

    void print() const;

    int getId();
    void setId(int);

private:
    int _id;
};