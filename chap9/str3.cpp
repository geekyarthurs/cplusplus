#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string line(50, '*');

int main()
{

    string text;
    getline(cin, text);

    cout << line << endl
         << text << endl;

    text.insert(3, "Mahesh");

    cout << line << endl
         << text << endl;

    text.erase(3,6); //Start , Quantity

    cout << line << endl
         << text << endl;
}