// find square of a number
#include <iostream>
using namespace std;
class square
{
public:
  int num, sqr;
  void method()
  {
    cout << "input a number ";
    cin >> num;
    sqr = num * num;
  }
  void display()
  {
    cout << "square of " << num << " is = " << sqr;
  }
};

int main()
{
  square a1;
  a1.method();
  a1.display();

  return 0;
}