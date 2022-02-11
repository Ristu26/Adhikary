#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,rn=0;
  cin>>n;
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
    cout<<n<<"is a palindrome number";
  }
  else
{
  cout<<n<<"is not a palindrome number";
}
return 0;
}
