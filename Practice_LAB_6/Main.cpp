#include <iostream>
#include <vector>
#include "freshman.h"
#include "senior.h"
#include "graduated.h"

using namespace std;

int main()
{
    vector <Student*> students {
         new Freshman("Ivan", 2020),
         new Senior("Petr", 2018),
         new Graduate("Maria", 2015)
    };

    for (auto student : students) {
        cout << student->getName() << " (" << student->getYear() << ")\n";
        student->study();
        student->passExam();
        if (auto graduate = dynamic_cast<Graduate*>(student)) {
            graduate->defendThesis();
        }
    }



    return 0;
}


//#include <iostream>
//#include <vector>
//#include "freshman.h"
//#include "senior.h"
//#include "graduate.h"
//
//int main()
//{
//    std::vector<Student*> students = {
//        new Freshman("Ivan", 2020),
//        new Senior("Petr", 2018),
//        new Graduate("Maria", 2015)
//    };
//
//    for (auto student : students) {
//        std::cout << student->getName() << " (" << student->getYear() << ")\n";
//        student->study();
//        student->passExam();
//        if (auto graduate = dynamic_cast<Graduate*>(student)) {
//            graduate->defendThesis();
//        }
//    }
//
//    for (auto student : students) {
//        delete student;
//    }
//
//    return 0;
//}


//for (int i = 0; i < sizeof(students); ++i) {
//    cout << student->getName() << " (" << student->getYear() << ")\n";
//    students[i].study();
//    students[i].passExam();
//    if (dynamic_cast<Graduate*>(students[i])) { //
//        Graduate* graduate = static_cast<Graduate*>(students[i]);
//        graduate->defendThesis();
//    }
//}