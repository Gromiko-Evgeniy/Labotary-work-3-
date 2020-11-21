#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int  n = 1;
	float d, E = pow(10, -3);
	d = pow(1. / 2, n) + pow(1. / 3, n);
	do
	{
		d += pow(1. / 2, n) + pow(1. / 3, n);
		n++;
	} while (d < E);

	cout << "it works, d=" << d;
}
