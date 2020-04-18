#include <iostream>

using namespace std;

bool getClient(string &name, long &nr);
void putClient(const string &name, const long &nr);

int main(int argc, char const *argv[])
{
    string clientName;
    long clientNr;

    if (getClient(clientName, clientNr))
    {
        putClient(clientName, clientNr);
    }
    else
    {
        cout << "Enter Valid Input";
    }

    return 0;
}

bool getClient(string &name, long &nr)
{

    cout << "Name : ";
    if (!getline(cin, name))
        return false;

    cout << "Number: ";
    if (!(cin >> nr))
        return false;
    return true;
}

void putClient(const string &name, const long &nr)
{
    cout << nr << ". " << name << endl;
}
