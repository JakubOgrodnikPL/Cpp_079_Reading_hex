#include <iostream>
using namespace std;
int main()
{
  float a = 32.76;
  int* q = (int*)&a;
  cout << hex << *q << endl;
}
