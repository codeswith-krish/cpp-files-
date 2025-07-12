// WAP in cpp to find area of reactangle
#include <iostream>
using namespace std;
class Area
{
public:
  int length, breadth;

  void method()
  {
    cout << "input length : ";
    cin >> length;
    cout << "input breadth : ";
    cin >> breadth;
  }

  void display()
  {
    cout << "Area of rectangle is : " << length * breadth;
  }
};
int main()
{
  Area a1;
  a1.method();
  a1.display();

    return 0;
}