// Bismillahir Rahmanir Rahim
// URI_2060
// Bino's challenge

#include<iostream>
#include<array>
using namespace std;

int main ()
{
	int numbers [4] = {2, 3, 4, 5};
	int N;
	cin >> N; // input of first line
	if (N < 1 || N > 1000)
		return 1;
	
	int L [1000]; // creating array for taking N numbers from user
	for (int i = 0; i < N; i++)
	{
		cin >> L [i];
	}

	for (int j = 0; j <= 3; j++)
	{
		int a = 0;
		for (int k = 0; k < N; k++)
		{
			if (L [k] % numbers [j] == 0)
				a++;
		}

		cout << a << " Multiplo(s) de " << numbers [j];
		cout << endl;
	}

	system ("pause");
	return 0;
}