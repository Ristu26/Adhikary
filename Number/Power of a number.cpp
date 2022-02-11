#include <iostream>
using namespace std;
int main()
{
  int number, power;
  cout<<"Enter the number:"<<endl;
  cin>>number;
  cout<<"Enter the power:"<<endl;
  cin>>power;
  int p=1;
  for(int i=1;i<=power;i++)
  {
    p=p*number;
  }
  cout<<"The power is:"<<p<<endl;
  return 0;
}
