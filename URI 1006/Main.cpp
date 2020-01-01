// Bismillahir Rahmanir Rahim
// URI_1006
// Average 2

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main ()
{
	float A, B, C, MEDIA;

	scanf ("%.1f",&A);
	if (A < 0 || A > 10)
		return 1;
	scanf ("%.1f",&B);
	if (B < 0 || B > 10)
		return 1;
	scanf ("%.1f",&C);
	if (C < 0 || C > 10)
		return 1;
	
	MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;

	cout << "MEDIA = " << MEDIA;

	cout << endl;
	system ("pause");
	return 0;
}