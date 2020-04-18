#include <iostream>

using namespace std;

int staticFunc()
{
    static int count = 0;
    count++;
    return count;
}

int nonStaticFunc()
{
    int count = 0;
    count++;
    return count;
}

int main()
{
    cout << "USING STATIC FUNC: "
         << staticFunc() << " "
         << staticFunc() << " "
         << staticFunc() << endl;

    cout << "NON-STATIC FUNC: "
         << nonStaticFunc() << " "
         << nonStaticFunc() << " "
         << nonStaticFunc << endl;
}