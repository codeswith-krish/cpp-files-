// Convert Celsius to Fahrenheit
#include <iostream>
using namespace std;
class celcius_to_fehrenheit
{
public:
  double celsius, fehrenheit;
  void method()
  {
    cout << "Input degree celcius : ";
    cin >> celsius;
    fehrenheit = celsius * 1.8 + 32;
  }

  void display()
  {
    cout << celsius << " degree celcius in fehrehheit = " << fehrenheit;
  }
};

int main()
{
  celcius_to_fehrenheit a1;
  a1.method();
  a1.display();

  return 0;
}
