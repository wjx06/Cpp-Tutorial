#include <iostream>
using namespace std;

int main()
{
    int val = 1, sum = 0;
    while (val <= 10)
    {
        sum += val;
        val++;
    }

    cout << sum;
    return 0;
}