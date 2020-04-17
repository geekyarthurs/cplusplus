#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string label;
    double price;

    cout << "Please Enter Label : ";

    cin >> setw(16) >> label;

    cin.sync();  // clears the buffer
    cin.clear(); // clear error flags

    cout << "Enter Price : ";
    cin >> price;

    cout << fixed << setprecision(2)
         << "Article: " << label << endl
         << "Price: " << price << endl;
}