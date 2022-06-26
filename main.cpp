//Zachary Hoppock
//personalInfo.cpp
//9/5/2020
//Input your name and age
//Version  #1
#include <iostream>

using namespace std;
int main()
{
string firstName;
string lastName;
int age;

  cout << "Enter your First name:   Then press the ENTER key"<< endl;
  cin >> firstName;

  cout << "Enter your Last name:    Then press the ENTER key"<< endl;
  cin >> lastName;

  cout << "Enter your age:          Then press the ENTER key"<< endl;
  cin >> age;

  cout << "\033[2J\033[0;0H";

cout << "Your first name is .... " << firstName << endl;
cout << "Your last name is ..... " << lastName << endl;
cout << "Your age is ........... " << age << endl;
cout << "Press any key to continue . . . ";
  return 0;
}