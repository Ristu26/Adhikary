#include <iostream>
using namespace std;
int main()
{
  int n,x=2;
  bool ch=0;
  cin>>n;
  while(x<n)
  {
    if(n%x==0)
    {
      ch=1;
    }
    x=x+1;
  }
  if(ch==0)
  {
    cout<<"This is a prime number";
  }
  else if(ch==1)
  {
    cout<<"This is a non prime number";
  }
  return 0;
}
