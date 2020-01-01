// Bismillahir Rahmanir Rahim
// URI_1009
// Salary with bonus

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

double totalSalary (string firstName, double salary, double salesValue)
{
	double total;
	total = salary + (salesValue * .15);
	return total;
}

int main ()
{
	string firstName;
	double sellerSalary, salesTotal;

	cin >> firstName;
	cin >> sellerSalary;
	cin >> salesTotal;

	std::cout << std::fixed;
	std::cout << std::setprecision (2);
	cout << "TOTAL = R$ " << totalSalary (firstName, sellerSalary, salesTotal);

	cout << endl;
	system ("pause");
	return 0;
}