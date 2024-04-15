#include <iostream>

using namespace std;

int main()
{
    // cin - console input
    int a;
    cin >> a;
    cout << "Variable name a = " << a << endl;

    string name, surname, employeeID;

    cout << "Enter your name : ";
    cin >> name;

    cout << "Enter your surname : ";
    cin >> surname;

    cout << "Enter your employee ID : ";
    cin >> employeeID;

    cout << "Welcome " << name << " " << surname << " " << employeeID << endl;
}
