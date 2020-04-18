#include <iostream>
#include <string>
namespace IO
{
using namespace std;

void print(string msg);
string input(void);

} // namespace IO

void IO::print(string msg)
{
    cout << msg;
}

std::string IO::input()
{
    string msg;
    getline(cin, msg);
    return msg;
}

using namespace IO;
string name;
int main()
{
    print("What is your name? \n>");
    name = input();
    print("Welcome " + name + "\n");
}