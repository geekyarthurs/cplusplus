#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int numbers[size];

    for(int i  = 0; i < size; i++){
        cin >> numbers[i];
    }

    for(int i =0; i < size; i++){
        int num;
        cin >> num;
        numbers[i] += num;
    }

    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }

}