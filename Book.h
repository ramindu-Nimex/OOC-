#pragma once
#include <string>
using namespace std;
class Book
{
private:
    int bookID;
    string bookName;
    string author;
public:
    void setBookDetails(int bID, string bName, string auth);
    void displayBookDetails();
    void setBookID(int i);
};

