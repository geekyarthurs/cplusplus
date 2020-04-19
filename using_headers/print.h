#include <iostream>

using namespace std;
void factorial(int number)
{
  int iteration, factorial=1;
  for(iteration=1; iteration<=number; iteration++)
  {
      factorial=factorial*iteration;
  }
  cout << factorial << endl;
}