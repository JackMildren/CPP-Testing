#include <iostream>

using namespace std;

int random(int max)
{
  return (rand() % max);
}

int main()
{
  srand(time(0));
  int roll = 0;
  for (int i = 0; i < 6; i++)
  {
    roll = random(6);
    cout << roll + 1 << " ";
  }

  return 0;
}