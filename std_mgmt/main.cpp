#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct Student
{
    string name;
    int roll;
} stdx;

void addStudent(Student student);
void deleteStudent(int roll);
void listStudent();

int main()
{

    while (true)
    {
        int roll;
        string studentName;
        int choice;
        cout << "1. View" << endl
             << "2. Add" << endl
             << "3. Delete" << endl
             << "Enter the number of your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            listStudent();
            break;
        case 2:
            cin.ignore(300000, '\n');
            cin.sync();
            cin.clear();
            cout << "Enter Name";
            getline(cin, studentName);
            cout << "Enter Roll: ";
            cin >> roll;
            stdx = {studentName, roll};
            addStudent(stdx);
            break;
        case 3:

            listStudent();
            cout << "Enter roll:";
            cin >> roll;
            deleteStudent(roll);
            break;
        default:
            continue;
        }
    }
}

void addStudent(Student student)
{
    fstream data_file;
    data_file.open("data.dat", std::ios_base::app);
    data_file << endl
              << student.roll << "," << student.name;
    data_file.close();
}

void deleteStudent(int roll)
{
    int roll_s;
    string raw_str;
    fstream data_file;
    fstream data_out_file;

    data_out_file.open("data2.dat", ios::in | ios::out | ios::trunc);
    data_file.open("data.dat", ios::in | ios::out);
    bool done = false;
    while (!data_file.eof())
    {

        getline(data_file, raw_str, ','); // roll number

        roll_s = stoi(raw_str);

        getline(data_file, raw_str); //name

        cout << roll_s << " " << roll << endl;
        if (roll_s != roll)
        {
            done = true;
            data_out_file << roll_s << "," << raw_str << endl;
        }
    }

    if (done == true)
        data_out_file << "\b";

    data_file.close();
    data_out_file.close();

    remove("data.dat");
    rename("data2.dat", "data.dat");
}

void listStudent()
{

    fstream file;
    file.open("data.dat", ios::in);

    int roll_s;
    string raw_str;

    while (!file.eof())
    {
        getline(file, raw_str, ','); // roll number

        if (!raw_str.empty())
        {
            roll_s = stoi(raw_str);
            getline(file, raw_str); //name
            cout << setw(17) << "ROLL NO:" << setw(18) << "NAME" << endl;
            cout << setw(15) << roll_s << setw(20) << raw_str << endl;
        }
        else
        {
            cout << "-----File is Empty!!------" << endl;
        }
    }
}