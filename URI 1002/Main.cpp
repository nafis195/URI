//Bismillahir Rahmanir Rahim
// URI_1002
//Area of a Circle

#include<iostream>
#include<iomanip>
using namespace std;

const double pi = 3.14159;

int main ()
{
	double A, R;

	cin >> R;
	A = pi * R * R;
	std::cout << std::fixed;
	std::cout << std::setprecision(4);
	std::cout << "A=" << A;

	cout << endl;
	system ("pause");
	return 0;
}