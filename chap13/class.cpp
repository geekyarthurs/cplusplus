#include <iostream>
#include <iomanip>
#include <string>

class Account
{
private:
    string name;
    unsigned long nr;
    double balance;

public:

    bool init(const string &name_i, unsigned long nr_i, double balance_i)
    {
        name = name_i;
        nr = nr_i;
        balance = balance_i;
    }
    void display()
    {
        cout << fixed << setprecision(2) << "NAME : " << name << endl;
        << "ACC: " << number << endl
        << "BALANCE: " << balance << endl;
    }
}

int main()
{
    Account student;
    student.init("Mahesh Regmi", 1234567, 123.00);
}