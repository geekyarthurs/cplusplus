#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    long sec;
    time(&sec);

    string tm = ctime(&sec);

    cout << "Full Date and Time : " << tm << endl;

    int time = stoi(string(tm, 11, 2));
    string greeting = "Have a great ";
    if (time < 10)
    {
        greeting += "Morning!";
    }
    else if (time < 17)
    {
        greeting += "Afternoon!";
    }
    else
    {
        greeting += "Night!";
    }

    cout << greeting << endl;

}