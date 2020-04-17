#include <iostream>
#include <string>

using namespace std;

double factorial(unsigned int y);
double l_factorial(unsigned int y);

int main()
{

    cout << l_factorial(3) << endl;
}

double factorial(unsigned int y)
{
    if (y < 2)
    {
        return y;
    }

    return y * factorial(y - 1);
}

double l_factorial(unsigned int y){

    int fact = 1;
    while(y > 1){
        fact *= y;
        y--;
    }

    return fact;

    

}
