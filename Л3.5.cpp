#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    float step, x, y, min = INT_MAX;
    int dp;

    cout << "enter the number of parts into which you want to divide the scope of the function " << endl;
    cin >> dp;


    step = 2. / dp;

    cout << "step=" << step << endl;


    for (float x = 0; x < 2; x += step)
    {
        y = log10(cosh(x)) - tanh(x) + 0.5;

        if (fabs(y) < min)
        {
            min = y;

            cout << "y=" << y << endl;
        }
    }
    cout << "min=" << min;
}