// Bismillahir Rahmanir Rahim
// URI_1080
// Highest & position

#include<iostream>
using namespace std;

int main ()
{
	int numbers [100];
	for (int i = 0; i < 100; i++)
		cin >> numbers [i];

	int highest = numbers [0];
	int position = 1;

	for (int j = 1; j < 100; j++)
	{
		if (highest < numbers [j])
		{
			highest = numbers [j];
			position = j + 1;
		}
	}

	cout << highest << endl;
	cout << position << endl;

	system ("pause");
	return 0;
}