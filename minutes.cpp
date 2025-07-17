// convert minutes into hours 
#include<iostream>
using namespace std;
int main()
{
  int min,minutes;
  double hr;
  cout<<"input minutes to convert : ";
  cin>>min;
  hr=min/60; // formula to find hours
  minutes=min%60; // formula to find remaining minutes after hour converstion
  cout<<min<<" minutes in hour = "<<hr<<" hr "<<minutes<<" min";

  return 0;
} 