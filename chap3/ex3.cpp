#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    string str("I have learned something again");
    int n = str.length();

    cout << n << endl;
    getline(cin,str1);
    getline(cin,str2);

    str1 += (" * " + str2);

    cout << str1;

    

}