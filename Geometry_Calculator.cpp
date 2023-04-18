// Chapter 4, Programming Challenge 21: Geometry Calculator
#include <iostream>

using namespace std;

int main() {
  const double PI = 3.14159;

  const int CIRCLE_CHOICE = 1;
  const int RECTANGLE_CHOICE = 2;
  const int TRIANGLE_CHOICE = 3;
  const int QUIT_CHOICE = 4;

  int choice;
  double radius;
  double length;
  double width;
  double base;
  double height;
  double area;

  cout << "Geometry Calculator\n\n";
  cout << "1. Calculate the area of a Circle\n";
  cout << "2. Calculate the area of a Rectangle\n";
  cout << "3. Calculate the area of a Triangle\n";
  cout << "4. Quit\n\n";
  cout << "Enter your choice (1-4): ";
  cin >> choice;

  switch (choice) {
  case CIRCLE_CHOICE:
    cout << "\nEnter the circle's radius: ";
    cin >> radius;
    if (radius < 0)
      cout << "\nThe radius can not be less than zero.\n";
    else {
      area = PI * radius * radius; 
      cout << "\nThe area is " << area << endl;
    }
    break;

  case RECTANGLE_CHOICE:
    cout << "\nEnter the rectangle's length: ";
    cin >> length;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    if (length < 0 || width < 0) {
      cout << "\nOnly enter positive values for " <<
        "length and width.\n";
    } else {
      area = length * width;
      cout << "\nThe area is " << area << endl;
    }
    break;

  case TRIANGLE_CHOICE:
    cout << "Enter the length of the base: ";
    cin >> base;
    cout << "Enter the triangle's height: ";
    cin >> height;
    if (base < 0 || height < 0) {
      cout << "\nOnly enter positive values for " <<
        "base and height.\n";
    } else {
      area = base * height * 0.5;
      cout << "\nThe area is " << area << endl;
    }
    break;

  case QUIT_CHOICE:
    cout << "Program ending.\n";
    break;

  default:
    cout << "The valid choices are 1 through 4. Run the\n" <<
      "program again and select one of those.\n";
  }

  return 0;
}