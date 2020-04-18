#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float x = 10.7;
    float &rx = x;
    // int &ix = x;
    cout << rx << endl;

    rx += 3;

    cout << rx << " " << x << endl;

    string name = "Mahesh";
    string &myName = name;

    cout << myName << endl;

    myName = "Sanju";

    cout << name << endl;



    return 0;

}
