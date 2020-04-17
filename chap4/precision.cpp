#include <iostream>
using namespace std;
int main()
{
    double x = 12.500;
    cout.precision(3); // Precision 2
    // or cout << setprecision(2) << 33.4546; need to import <iomanip>
    // Default precision is 6 digits.
    cout << " By default: " << x << endl;
    cout << " showpoint: " << showpoint << x << endl;
    cout << " fixed: " << fixed << x << endl;
    cout << " scientific: " << scientific << x << endl;
    cout << " showpos: " << showpos << x << endl;

    cout << uppercase << hex << 333 << endl;

    return 0;

    

    
}