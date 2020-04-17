#include <iostream>
 
using namespace std;
 
int main()
{
    int size;
    cin >> size;
    int numbers[size];
 
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
 
    for (int i = 0; i < size; i++)
    {
        
        if(numbers[i] > 10){
            cout << 10 << " " << numbers[i] - 10 << endl;
        }
        else{
            cout << 0 << " " << numbers[i] << endl;
        }
    }
}