#include <iostream>
#include <string>
using namespace std;
int main()
{

    for ( long long i = 0; i < 1000000000; i++)
    {
        int s = 1;
        for (int j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                s += j;
            }
        }
        if (s == i) 
        {
            cout << i << " ";
        }
    }


}