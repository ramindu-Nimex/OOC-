#include <iostream>
#include <iomanip>
using namespace std;

// function declare
void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);

int main() {

	// variable declare
	int marks1[5], marks2[5];
	float CA1[5], CA2[5];

	cout << "Enter 5 students marks : " << endl; // prompt

	// using for loop
	for (int i = 0; i < 5; i++) {
		// input students marks 1
		cout << "Student " << i + 1 << " marks1 : "; // prompt
		cin >> marks1[i];

		// input students marks 2
		cout << "Student " << i + 1 << " marks2 : "; // prompt
		cin >> marks2[i];

		// function calling
		findMarks(marks1[i], marks2[i], CA1[i], CA2[i]);

		cout << endl;
	}

	cout << endl << "Student\tMarks1\tMarks2\tCA_1\tCA_2\n";

	// using for loop
	for (int i = 0; i < 5; i++) {
		cout << setiosflags(ios::fixed) << setprecision(2);
		// output
		cout << i + 1 << "\t" << marks1[i] << "\t" << marks2[i] << "\t" << CA1[i] << "\t" << CA2[i] << endl;
	}

	return 0;
}

// function implementation
void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2) {

	t_CA1 = t_marks1 * 0.2;
	t_CA2 = t_marks2 * 0.3;
}
