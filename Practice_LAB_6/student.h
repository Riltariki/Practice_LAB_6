#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
public:
    Student(const string& name, int year);
    virtual ~Student();

    virtual void study() = 0;
    virtual void passExam() = 0;

    const string& getName() const;
    int getYear() const;

private:
    string m_name;
    int m_year;
};

#endif //STUDENT_H