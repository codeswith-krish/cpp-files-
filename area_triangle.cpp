#include<iostream>
using namespace std;
int main()
{
  int base,height;
  cout<<"input base of triangle : ";
  cin>>base;
  cout<<"input height of triangle : ";
  cin>>height;
  cout<<"Area of triangle is : "<<(0.5*base*height); //formula was (1/2*base*height ) so i put 1/2 as 0.5

  return 0;
}