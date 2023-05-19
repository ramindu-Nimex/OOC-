#pragma once
#include <string>
using namespace std;
class Doctor
{
private:
	int doctorID;
	string doctorname;
	string specialization;
	string hospital;

public:
	void setDoctorDetails(int dID, string dName, string special);
	void displayDoctorDetails();
	void setHospital();
	string getSpecialization();
};

