#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a1 = 3, a2 = 6;
    int *b = &a1;

    cout << *b << endl;

    int b_val = (uintptr_t)b;

    cout << b << " " << &b << " " << *(&b) << endl;

    b = &a2;

    cout << *b << endl;

    *b = 55;

    cout << *b << endl;

    return 0;
}
