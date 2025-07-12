// cube of a number
#include <iostream>
using namespace std;
class cube
{
public:
  int num;
  void method()
  {
    cout << "input a number : ";
    cin >> num;
  }
  void display()
  {
    cout << "cube a " << " is = " << num * num * num;
  }
};
int main()
{
  cube a1;
  a1.method();
  a1.display();

  return 0;
}