#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1("Mahesh Regmi"), s2("Sanju Adhikari");
    s1.replace(0, 6, s2, 0, 5); // (final, str, strChoice?)

    cout << s1 << endl;

    s1.replace(0, 1, s2); // (final, str, strChoice?)

    cout << s1 << endl;

    cout << s1.find("Regmi") << endl;

    return 0;
}
