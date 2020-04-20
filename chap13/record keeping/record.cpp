#include <iostream>
#include <iomanip>

using namespace std;

class Record
{
public:
    string name;
    int number;
};

// struct Record{ string name; int number; }

int main(){
    Record r1 = {"Mahesh",35};
    // r1.name = "Mahesh";
    // r1.number = 35;

    cout << r1.name << r1.number << endl;
}