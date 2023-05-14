#pragma once
class Student
{
private:
    int studentID;
    char studentName[10];
    int marksOOC;
    int marksSPM;
    int marksISDM;
public:
    void setStudentDetails(int sid, const char sname[]);
    void setMarksOOC(int mOOC);
    int getMarksOOC();
    void setMarksSPM(int mSPM);
    int getMarksSPM();
    void setMarksISDM(int mISDM);
    int getMarksISDM();

};

