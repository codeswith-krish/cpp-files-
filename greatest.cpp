// finding greatest among three number 
#include<iostream>
using namespace std;
int main()
{
  int num1,num2,num3;
  cout<<"input three number \n";
  cin>>num1>>num2>>num3;
  if(num1>=num2 && num1>=num3)
  {
    cout<<num1<<" is the greatest among the numbers above ";
  }
  else if (num2>=num1 && num2>=num3)
  {
    cout<<num2<<" is the greatest amonth the number above ";
  }
  else
  {
    cout<<num3<<" is the greatest among the number above ";
  }

  return 0;
}