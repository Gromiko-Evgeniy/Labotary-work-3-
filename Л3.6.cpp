#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a = 2, b = 3;
    float y, x;


    for (float x = 2; x < 3.1; x += 0.2)
    {
        y = pow(x, 1. / 2) * sinh(x);
        cout << "y=" << y << "    x=" << x << endl;
    }
}