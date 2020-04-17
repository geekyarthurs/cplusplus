#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        cout << setw(5) << i;
    }
    cout << endl;
    cout << "    -----------------------------------------------";
    cout << endl;

    for (int row = 1; row <= 10; row++)
    {

        for (int col = 1; col <= 10; col++)
        {
            if(col == 2){
                cout << " |";
                cout << setw(3);
            }else{
                cout << setw(5);
            }
            cout << row * col;
        }

        cout << endl;
    }
}