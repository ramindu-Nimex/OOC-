#include "Doctor.h"
#include <iostream>
#include <string>using namespace std;

void Doctor::setDoctorDetails(int dID, string dName, string special)
{
	doctorID = dID;
	doctorname = dName;
	specialization = special;
}

void Doctor::displayDoctorDetails()
{
	cout << endl << "DoctorID = " << doctorID << endl;
	cout << "DoctorName = " << doctorname << endl;
	cout << "Specialization = " << specialization << endl;
	cout << "Hospital = " << hospital << endl << endl;
}

void Doctor::setHospital()
{
	cout << "Input new hospital of doctor " << doctorID << " : ";
	cin >> hospital;
}

string Doctor::getSpecialization()
{
	return specialization;
}
