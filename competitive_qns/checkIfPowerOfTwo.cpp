#include <iostream>

using namespace std;

bool isPowerOfTwo(int x)
{
    if (x == 0)
        return false;
    else
    {
        while (x % 2 == 0)
            x /= 2;

        return (x == 1);
    }
}

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    cout << isPowerOfTwo(n) << endl;
}

 bool isPowerOfTwoBitWise(int x)
    {
        // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
        return (x && !(x & (x - 1)));
    }