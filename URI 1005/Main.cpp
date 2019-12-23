// Bismillahir Rahmanir Rahim
// URI_1005
// Average 1

#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	float A, B, MEDIA;

	cin >> A;
	if (A < 0 || A > 10)
		return 1;
	cin >> B;
	if (B < 0 || B > 10)
		return 1;

	MEDIA = ((A  * 3.5) + (B * 7.5)) / (3.5 + 7.5);

	std::cout << std::fixed;
	std::cout << std::setprecision (5);
	cout << "MEDIA = " << MEDIA;

	cout << endl;
	system ("pause");
	return 0;
}