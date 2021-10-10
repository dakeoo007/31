//Ë®ÏÉ»¨
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, unit, ten, hund;
	for (n = 100; n < 1000; n++)
	{
		unit = n % 10;
		ten = (n/10) % 10;
		hund = n / 100;
		if (n == hund*hund*hund + ten*ten*ten + unit*unit*unit)
			cout << n << "";
	}
	cout << endl;
	return 0;
}