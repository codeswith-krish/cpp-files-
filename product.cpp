#include<iostream>
using namespace std;
class product{
  public:
  int num1,num2,product;
  void method ()
  {
    cout<<"input 1st number : ";
    cin>>num1;
    cout<<"input 2nd number : ";
    cin>>num2;
    product = num1*num2;

    cout<<"product of bothh number : "<<product;
  }
};
int main()
{
  product a1;
  a1.method();

  return 0;
}