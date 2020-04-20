#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int num = 100;
    int* pi = &num;
    cout << *pi << endl;

    void* pv = pi;
    cout << *pv << endl;

    return 0;
}
