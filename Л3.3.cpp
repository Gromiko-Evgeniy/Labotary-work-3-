#include <iostream>
#include <math.h>
using namespace std;

int main()
{

	const float PI = 3.1415;
	float x, H, step, B;
	int M = 20, A = 0, y, i;

	cout << "enter step of changing the variable i" << endl;
	cin >> step; 


	B = PI / 2;
	H = (B - A) / M;


	for (i = 0; i <= 20; i += step)
	{
		x = A + i * H;
		y = sin(x) - cos(x);
		cout << "i=" << i << endl;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
}

