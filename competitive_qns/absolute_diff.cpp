#include <iostream>

using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;

    int result = n - m;

    if(result < 0){
        result *= (-1);
    }

    cout << result;

}