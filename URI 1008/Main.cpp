// Bismillahir Raahmanir Rahim
// URI_1008
// Salary

#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	int employeeNumber, workedHours;
	float amountPerHour, salary;

	cin >> employeeNumber >> workedHours >> amountPerHour;
	salary = workedHours * amountPerHour;

	cout << "NUMBER = " << employeeNumber << endl;
	cout << std::fixed << setprecision (2) << "SALARY = U$ " << salary;

	cout << endl;
	system ("pause");
	return 0;
}