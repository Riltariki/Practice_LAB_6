#include "graduated.h"

Graduate::Graduate(const std::string& name, int year)
    : Student(name, year), m_thesisTopic("")
{
}

void Graduate::study()
{
    // реализация метода study для Дипломника
}

void Graduate::passExam()
{
    // реализация метода passExam для Дипломника
}

void Graduate::defendThesis()
{
    // реализация метода defendThesis для Дипломника
}