#ifndef GRADUATE_H
#define GRADUATE_H
#include "student.h"

using namespace std;

class Graduate : public Student {
public:
    Graduate(const string& name, int year);

    virtual void study();
    virtual void passExam();
    virtual void defendThesis();

private:
    string m_thesisTopic;
};



#endif // GRADUATE_H