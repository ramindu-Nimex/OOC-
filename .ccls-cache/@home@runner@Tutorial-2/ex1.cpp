#include <iostream>
using namespace std;

int main() {

  float cm, inches;

  cout << "Enter a Length in cm : ";
  cin >> cm;

  inches = cm / 2.54;
  
  cout << "Length in inches is : " << inches << endl;

  return 0;
}