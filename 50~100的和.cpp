#include <iostream>
using namespace std;

int main()
{
    int current_number = 50, sum = 0;
    while (current_number <= 100)
    {
        sum += current_number;
        ++current_number;
    }

    cout << sum;
    return 0;
}
