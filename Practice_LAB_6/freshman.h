#ifndef FRESHMAN_H
#define FRESHMAN_H
#include "student.h"

using namespace std;

class Freshman : public Student {
public:
    Freshman(const string& name, int year);

    virtual void study();
    virtual void passExam();
};


#endif // FRESHMAN_H