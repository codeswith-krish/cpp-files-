#include<iostream>
using namespace std;
class cuboid{
  public:
  float length,breadth,height,area;
  void method()
  {
    cout<<"input length of cuboid : ";
    cin>>length;
    cout<<"input breadth of cuboid : ";
    cin>>breadth;
    cout<<"input heigth of cuboid : ";
    cin>>height;
    
    area= 2*(length*breadth + breadth*height + length*height);
  }
  void display()
  {
    cout<<"Area of cuboid : "<<area;
  }
};

int main()
{
  cuboid a1;
  a1.method();
  a1.display();

  return 0;
}