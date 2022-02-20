#include <iostream>
using namespace std;
int main()
{
   int n,r;
  int f=1;
  int F=1;
  cout<<"Enter the number:";
  cin>>n;
  cout<<"seat number:";
  cin>>r;
  for(int i=n;i>=2;i--)
  {
    f=f*i;
  }
  for(int j=(n-r);j>=2;j--)
  {
    F=F*j;
  }
  cout<<"Permutations is:"<<f/F;
return 0;
}
