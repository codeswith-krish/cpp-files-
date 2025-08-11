// convert minutes into hours
#include <iostream>
using namespace std;
class minutes
{
public:
  int min, minutes;
  double hr;
  void method()
  {
    cout << "input minutes to convert : ";
    cin >> min;
    hr = min / 60;      // formula to find hours
    minutes = min % 60; // formula to find remaining minutes after hour converstion
    cout << min << " minutes in hour is shown as :  " << endl << hr << " hr " << minutes << " min";
  }
};
int main()
{
  minutes a1;
  a1.method();

  return 0;
}