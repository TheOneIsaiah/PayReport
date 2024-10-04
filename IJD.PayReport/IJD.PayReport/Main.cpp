//assignment 4 Pay REport
//Isaiah Doran

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};


int main() {

    int numOfEmplyees = 0;
    cout << "Enter the number of employees: \n";
    cin >> numOfEmplyees;
    Employee* employees = new Employee[numOfEmplyees];

    for (int i = 0; i < numOfEmplyees; i++) {

        cout << "Enter the ID for Employee " << i + 1 << ": \n";
        cin >> employees[i].ID;
        cout << "Enter the First Name for Employee " << i + 1 << ": \n";
        cin >> employees[i].FirstName;
        cout << "Enter the Last Name for Employee " << i + 1 << ": \n";
        cin >> employees[i].LastName;
        cout << "Enter the Hours worked for Employee " << i + 1 << ": \n";
        cin >> employees[i].HoursWorked;
        cout << "Enter the Hourly rate for Employee " << i + 1 << ": \n";
        cin >> employees[i].HourlyRate;
   }
    cout << "Pay Report \n";
    cout << "---------- \n";

    float total = 0;
    for (int  i = 0; i < numOfEmplyees; i++)
    {
        cout << employees[i].ID << ". " << employees[i].FirstName << " " << employees[i].LastName << ": $" << employees[i].HourlyRate * employees[i].HoursWorked << "\n";
        total += employees[i].HourlyRate * employees[i].HoursWorked;
    }

    cout << "Total Pay: $" << total << "\n";
   


    delete[] employees;
	(void)_getch();
	return 0;
}