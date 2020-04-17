#include <iostream>

using namespace std;

int main() {

    int size;
    cin >> size;

    int numbers[size];
    for(int i = 0; i < size; i++){
        int in1, in2;
        cin >> in1 >> in2;
        numbers[i] = in1 + in2;
    }

    for(int i = 0; i < size ; i++) {
        cout << "Case " << i + 1 << ": " << numbers[i] << endl;
    }


    return 0;
}