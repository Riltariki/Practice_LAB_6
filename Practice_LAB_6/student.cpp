#include "student.h"
using namespace std;
Student::Student(const string& name, int year)
    : m_name(name), m_year(year)
{
}

Student::~Student()
{
}

const  string& Student::getName() const
{
    return m_name;
}

int Student::getYear() const
{
    return m_year;
}