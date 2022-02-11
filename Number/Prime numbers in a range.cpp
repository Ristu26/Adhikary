#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter the 1st input"<<endl;
  cin>>a;
  cout<<"Enter the 2nd input"<<endl;
  cin>>b;
  c=a;
  for(int j=a;j<=b;j++)
  {
    int i =2;
    while(i<c)
    {
      if(c%i==0)
      break;
      i++;
    }
    if(i==c)
      cout<<c<<" ";
      c++;
  }
  return 0;
}
