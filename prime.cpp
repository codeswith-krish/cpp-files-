#include <iostream>
using namespace std;
class prime
{
public:
  int is_prime = 0, num;
  void method()
  {
    cout << "input a number ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
      if (num % i == 0)
      {
        is_prime++;
      }
    }
  }

  void display()
  {
    if (is_prime == 2)
    {
      cout << num << " is a prime number ";
    }
    else
    {
      cout << num << " is not a prime number";
    }
  }
};
int main()
{
  prime a1;
  a1.method();
  a1.display();

  return 0;
}