// check a character is vowel or consonante 
#include<iostream>
using namespace std;
int main()
{
  char character ;
  cout<<"input a alphabates : ";
  cin>>character ;
  if(character == 'a' || character == 'A' || character == 'e' || character == 'E' || character == 'i' || character == 'I' || character == 'o' || character == 'O' || character == 'u' || character == 'U')
  {
    cout<<"vowel ";
  }
  else 
  {
    cout<<"consonante ";
  }

  return 0;
}