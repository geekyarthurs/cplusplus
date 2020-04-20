#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    float marks;
    int roll_number;

public:
    bool init(const string name_i, float marks_i, int roll_i){
        name = name_i;
        marks = marks_i;
        roll_number = roll_i;

        return true;
    }
    void set_marks(int mark){
        marks = mark;
        
    }
};

int main(){
    Student s1;
    s1.init("Mahesh Regmi", 78.55, 1);

    s1.display();

}