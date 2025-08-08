#include <iostream>
using namespace std;
class even{
public:
  int num;
  void method()
  {
    cout << "input the last number :";
    cin >> num;
    cout << "even number between 1 and " << num << " are " << endl;
    for (int i = 1; i < num + 1; i++)
    {
      if (i % 2 == 0)
      {
        cout << i << "  ";
      }
    }
  }
};
int main()
{
  even a1;
  a1.method();

  return 0;
}