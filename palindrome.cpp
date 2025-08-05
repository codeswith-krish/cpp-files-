#include <iostream>
using namespace std;
class palindrome
{
public:
  int num, rev, sum = 0, org;
  void method()
  {
    cout << "input a number :";
    cin >> num;
    org = num;
    while (num != 0)
    {
      rev = num % 10;
      sum = sum * 10 + rev;
      num = num / 10;
    }
  }
  void display()
  {
    if (org == sum)
    {
      cout << org << " is a paildrome number ";
    }
    else
    {
      cout << org << " is not a palindrome number ";
    }
  }
};

int main()
{
  palindrome a1;
  a1.method();
  a1.display();

  return 0;
}