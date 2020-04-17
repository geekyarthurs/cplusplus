#include <iostream>
using namespace std;

int main()
{
    int numbers[10] = {0};
    string str;
    cin >> str;
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        int n = int(str[i]) - 48;
        numbers[n]++;
    }

    for(int i = 0; i < 10; i++){
        cout << i << " " << numbers[i] << endl;
    }

}