#include <iostream>
using namespace std;

int main() {

  double salary, netSalary;
  int etype, otHrs, otRate;

  cout << "Enter Employee Type : ";
  cin >> etype;

  cout << "Enter Salary : ";
  cin >> salary;

  cout << "Enter OtHrs : ";
  cin >> otHrs;

  switch (etype) {

    case 1 :
        otRate = 1000;
        break;

    case 2 :
        otRate = 1500;
        break;

    case 3 :
        otRate = 1700;
        break;
  }

  netSalary = salary + otHrs * otRate;
  cout << "Net Salary is : " << netSalary << endl;

  return 0;
}