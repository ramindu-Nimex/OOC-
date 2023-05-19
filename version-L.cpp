#include <iostream>
#include"Doctor.h"
#include <string>
using namespace std;

int main() {
	Doctor d1, d2, d3;

	d1.setDoctorDetails(1, "Dr.Sunil", "Neurologistist");
	d2.setDoctorDetails(2, "Dr.Yasantha", "oncologist");
	d3.setDoctorDetails(3, "Dr.Govin", "cardilogist");

;	d1.setHospital();
	d2.setHospital();
	d3.setHospital();

	d1.displayDoctorDetails();
	d2.displayDoctorDetails();
	d3.displayDoctorDetails();
}