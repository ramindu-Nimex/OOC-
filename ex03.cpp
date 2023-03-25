#include <iostream>
using namespace std;

//  Define a structure called Box
struct Box {
  int Height;
  int Width;
  int Length;
};

int volume(Box box); // function prototype

// Do not change the main function
int main() {
  // Create a variable called box1 of the Box structure type
  struct Box box1;
  // Create a variable called box2 of the Box structure type
  struct Box box2;

  int totalVolume;

  //  Input the height, width, lenght of box1 and box2
 cout << "Enter Box 1 Height : ";
 cin >> box1.Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1.Length;
 cout << endl;
 cout << "Enter Box 2 Height : ";
 cin >> box2.Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.Length;

  totalVolume = volume(box1) + volume(box2);

  cout << "Volume of Box is " << totalVolume << endl;

  return 0;
}

int volume(Box box) {
  return box.Height * box.Width * box.Length;
}