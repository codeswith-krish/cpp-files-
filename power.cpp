// find the value of a exponential term x^y
#include <iostream>
#include <math.h>
using namespace std;
class power
{
public:
  double num, power;
  void method()
  {
    cout << "input the number :";
    cin >> num;
    cout << "input the power the number ";
    cin >> power;
    cout << "simplify = " << pow(num, power);
  }
};
int main()
{
  power a1;
  a1.method();
}