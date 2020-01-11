// Bismillahir Rahmanir Rahim
// URI_1160
// Population increase

#include<iostream>
using namespace std;

int main ()
{
	int testCase;
	cin >> testCase;
	if (testCase < 1 || testCase > 3000)
		return 1;

	int output [3000];
	int PA, PB;
	double GA, GB;
	int year, populationAfterYearA, populationAfterYearB;

	for (int i = 1; i <= testCase; i++) //loop for every testcase
	{
		cin >> PA;
		cin >> PB;
		cin >> GA;
		cin >> GB;

		for (year = 1; ; year++)
		{
			populationAfterYearA = (GA / 100) * PA * year;
			PA = PA + populationAfterYearA;

			populationAfterYearB = (GB / 100) * PB * year;
			PB = PB + populationAfterYearB;

			if (PA > PB)
			{
				cout << year << " anos." << endl;;
				break;
			}
		}
	}

	system ("pause");
	return 0;
}

