// find square root of a number
#include<iostream>
#include<math.h>
using namespace std;
class root{
  public:
  double num1,root;
  void method()
  {
    cout<<"input a number inside square root : ";
    cin>>num1;

    root=pow(num1,0.5);
  }
  void display()
  {
    cout<<"sqaure root of "<<num1 <<" is : "<<root;
  }
};
int main()
{
  root a1;
  a1.method();
  a1.display();

  return 0;
}