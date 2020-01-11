// Bismillahir Rahmanir Rahim
// URI_2334
// Little ducks
//Note: for this program I used "unsigned long long int" to work with 10^19 value. See below.

#include<iostream>
using namespace std;

int main ()
{
	unsigned long long int P, LD;
	cin >> P;
	if (P == -1)
	{
		system ("pause");
		return 0;
	}

	while (P != -1)
	{
		if (P == -1)
			break;
		if (P == 0)
		{
			LD = 0;
			cout << LD << endl;
			cin >> P;
			continue;
		}
		LD = P - 1;
		cout << LD << endl;
		cin >> P;
	}

	system ("pause");
	return 0;
}


//for n<=10^9. Use "int". As its range is from -2^31 to +2^31. Around ~10^9. But in case of n~10^18. 
//"int" wont work. So use "long long int". And range can further be increased for 0<n<10^19. by using 
//"unsigned long long int". Also, as the size will increase, the computation time will also increase.
//Link:- https://discuss.codechef.com/questions/23008/use-long-long-or-int