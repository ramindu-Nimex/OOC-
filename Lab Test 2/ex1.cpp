#include <iostream>
using namespace std;
#define SIZE 10

int searchKey(int key);
int findMax();

int numbers[SIZE];

int main() {

	int key, index, max;

	for (int i = 0; i < SIZE; i++) {

		cout << "Enter 10 Integers : ";
		cin >> numbers[i];
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) {

		cout << numbers[i] << "\t";
	}
	cout << endl;
	cout << "Enter Search for the numbers : ";
	cin >> key;

	index = searchKey(key);
	if (index == -1) {

		cout << "Value is not found" << endl;
	}
	else {

		cout << "Value found " << index << endl;
	}
	cout << endl;
	max = findMax();
	cout << "Max number is : " << max << endl;

	return 0;
}

int searchKey(int key) {


	for (int i = 0; i < SIZE; i++) {

		if (numbers[i] == key) {
			return i;
		}
	}
	return -1;
}

int findMax() {

	int max = numbers[0];

	for (int i = 0; i < SIZE; i++) {

		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	return max;
}

