#include <iostream>
using namespace std;
class numner_check
{
public:
  int num;
  char even, odd, condition;
  void method()
  {
    cout << "input a number : ";
    cin >> num;
    if (num % 2 == 0)
    {
      condition = even;
    }
    else
    {
      condition = odd;
    }
  }
  void display()
  {
    if (condition == even)
    {
      cout << num << " num is even ";
    }
    else
      cout << num << " num is odd ";
  }
};
int main()
{
  numner_check a1;
  a1.method();
  a1.display();

  return 0;
}