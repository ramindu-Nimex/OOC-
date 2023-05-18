#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

void Book::setBookDetails(int bID, string bName, string auth) {
	bookID = bID;
	bookName = bName;
	author = auth;
}

void Book::displayBookDetails() {
	cout << endl << "BookID = " << bookID << endl;
	cout << "BookName = " << bookName << endl;
	cout << "Author = " << author << endl;
}

void Book::setBookID(int i) {
	cout << "Input new book ID " << i << ": ";
	cin >> bookID;
}