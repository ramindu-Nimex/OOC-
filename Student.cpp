#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

void Student::setStudentDetails(int sid, const char sname[]) {
    studentID = sid;
    strcpy_s(studentName, sname);
}

void Student::setMarksOOC(int mOOC) {
    marksOOC = mOOC;
}

int Student::getMarksOOC() {
    return marksOOC;
}

void Student::setMarksSPM(int mSPM) {
    marksSPM = mSPM;
}

int Student::getMarksSPM() {
    return marksSPM;
}

void Student::setMarksISDM(int mISDM) {
    marksISDM = mISDM;
}

int Student::getMarksISDM() {
    return marksISDM;
}