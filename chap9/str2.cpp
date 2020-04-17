#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string text;
    string line;

    cout << string(50, '*') << endl
         << "Enter your texts: ";

    while (true)
    {
        getline(cin, line);
        // cin.getline(line,50,'\n')
        if (line.length() == 0)
            break;
        text = line + "\n" + text;
    }

    cout << "OUTPUT: \n"
         << text;

    return 0;
}
