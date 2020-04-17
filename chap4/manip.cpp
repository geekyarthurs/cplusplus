#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << "Default Width : " << cout.width() << endl;
    cout << "Default Fill : " << cout.fill() << endl;

    cout << "|" << left << setw(6) << "X" << "|" << endl;
    cout << "|" << right << setw(6) << "X" << "|" << endl;

    cout << "|" << left << setfill('-') << setw(6) << "X" << "|" << endl;
    cout << "|" << right << setfill('-') << setw(6) << "X" << "|" << endl;

    cout << "|" << setw(5) << setfill('0') << -123 << "|" <<  endl;
    cout << "|" << setw(5) << setfill('0') << internal << -123 << "|" <<  endl;


    cout << true << endl;
    cout << boolalpha << true << endl; //noboolalpha
}