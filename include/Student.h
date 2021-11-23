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

    int getId() const;
    void setId(int);

private:
    int _id;
};