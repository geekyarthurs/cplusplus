#include <iostream>

using namespace std;

long sum(int a, int b, int c, int d);
inline double Max(double, double);
inline char Max(char, char);

int main()
{
}

long sum(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}

inline double Max(double x, double y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

inline char Max(char x, char y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}