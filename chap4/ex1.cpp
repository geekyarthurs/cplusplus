#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    unsigned int num;
    
    cout << "Enter seed: ";
    cin >> num;

    srand(num);

    for(int i = 0; i < 100; i++){
        cout << (rand() % 100 + 1) << " ";
    }

}