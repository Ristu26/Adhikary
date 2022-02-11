#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"starting number:";
  cin>>x;
  cout<<"ending number:";
  cin>>y;
  for(int i=x;i<=y;i++)
  {
    int n=i,rn=0;
  int temp=n;
  int c;
  while(temp>0)
  {
    c=(temp%10);
    rn=rn*10+c;
    temp=temp/10;
  }
  if(n==rn)
  {
    cout<<n<<" ";
}
}
return 0;
}
