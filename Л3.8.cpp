#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num, s = 1;
    cout << "enter a number \n";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) 
        {
            s += i;
        }
    }
    if (s == num) 
    {
        cout << "your number is perfect";
    }
    else 
    {
        cout << "your number isn't perfect";
    }
}