// Check if a number is even or odd.
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
      // storing value of the if (condition ) in condition = even so that i use this on other medthod
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
      cout << num << " is an even number ";
    }
    else
      cout << num << " is an odd number  ";
  }
};
int main()
{
  numner_check a1;
  a1.method();
  a1.display();

  return 0;
}