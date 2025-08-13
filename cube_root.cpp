#include <iostream>
#include <math.h>
using namespace std;
class cube_root
{
public:
  double num1;
  void method()
  {
    cout << "input a number inside the cube root : ";
    cin >> num1;

    cout << "cube root of " << num1 << " is : " << pow(num1, 0.3333333333); // we take 1/3 as 0.3333333333
  }
};

int main()
{
  cube_root a1;
  a1.method();

  return 0;
}