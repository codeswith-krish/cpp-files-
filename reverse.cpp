// WAP in cpp to find reverse of a number 
#include <iostream>
using namespace std;
class reverse
{
public:
  int num, rem, sum = 0;
  void method()
  {
    cout << "input a number : ";
    cin >> num;
    while (num != 0)
    {
      rem = num % 10;
      sum = sum * 10 + rem;
      num = num / 10;
    }
  }
  void display()
  {
    cout << "reverse of the number = " << sum;
  }
};
int main()
{
  reverse a1;
  a1.method();
  a1.display();

  return 0;
}