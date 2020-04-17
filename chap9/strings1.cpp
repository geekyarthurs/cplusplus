#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
string line(50, '*');
int main()
{
    string text;
    cout << line << endl
         << "Enter a line of text: " << endl;
    getline(cin, text);

    cout << line << endl
         << "Length: " << line.length() << endl;

    string copy(text), start(text,0,10);

    cout << "Your text:\n" << copy << endl;
    cout << "The first 10 characters are" << start << endl;
    return 0;
}