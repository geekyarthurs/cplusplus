#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "As time by ...";
    string s2 = "goes ";

    cout << s1 << endl;

    

    int pos = s1.find("by");
    s1.insert(pos, s2);

    cout << s1 << endl;

    pos = s1.find("by");
    s1.erase(pos, 2);

    cout << s1 << endl;

    pos = s1.find("time");
    s1.replace(pos, 4, "Bill");

    cout << s1 << endl;
}