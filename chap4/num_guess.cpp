#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    long sec;
    time(&sec);
    srand((unsigned)sec);

    unsigned int secret_num = rand() % 15 + 1;
    int attempts = 0;

    int guess;

    while (attempts < 3)
    {

        cout << "Your Guess: ";
        cin.sync();
        cin.clear();
        cin >> guess;

        if (guess < secret_num)
        {
            cout << "Too Small!" << endl;
            attempts++;
        }
        else if (guess > secret_num)
        {
            cout << "Too Large!" << endl;
            attempts++;
        }
        else
        {
            cout << "You Win!" << endl;
            break;
        }
    }

    if (attempts == 3)
    {
        cout << "You Lose!" << endl;
    }
}