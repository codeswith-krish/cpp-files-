// volume of cylinder
#include <iostream>
using namespace std;
class volume
{
public:
  double radius, height;
  double vol;
  void method()
  {
    cout << "input radius of cylinder ";
    cin >> radius;
    cout << "input height of cylinder ";
    cin >> height;
    vol = (3.14 * radius * radius * height);
  }
  void display()
  {
    cout << "volume of cylindr is = " << vol;
  }
};
int main()
{
  volume a1;
  a1.method();
  a1.display();

  return 0;
}