#include <iostream>

using namespace std;

int main()
{
    int max = 0;
    int length;
    cin >> length;
    int numbers[length];
    int n_writer = 0;
    int max_numbers[length];

    for (int i = 0; i < length; i++)
    {
        cin >> numbers[i];
    }

    for(int i = length - 1; i >= 0; i--){
            if(numbers[i] >= max){
                max_numbers[n_writer] = numbers[i];
                n_writer++;
                max = numbers[i];
            }
            
    }

    for(int i = n_writer - 1; i >= 0; i--){
        cout << max_numbers[i] << " ";
    }
}