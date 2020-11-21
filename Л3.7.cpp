#include <iostream>
using namespace std;

int main()
{
	float A, B;
	for (int i = 10; i < 100; i++)
	{

		A = i / 10;
		B = i % 10;

		if (2 * (A + B) == A * B)
		{
			cout << i << endl;
		}

	}


}