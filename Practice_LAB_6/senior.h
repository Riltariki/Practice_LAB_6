#ifndef SENIOR_H
#define SENIOR_H

#include "student.h"

using namespace std;

class Senior : public Student {
public:
    Senior(const string& name, int year);

    virtual void study();
    virtual void passExam();
};

#endif // SENIOR_H