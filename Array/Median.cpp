#include <iostream>
using namespace std;
int main()
{
  int a[100];
  int b=0;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(a[i]<a[j])
      {
        b=a[i];
        a[i]=a[j];
        a[j]=b;
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<" "<<a[i];
  }
  cout<<"the median is:";
if(n%2==0)
{
  int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(a[ind1]+a[ind2])/2;
}
else
{
  cout<<a[(n/2)];
}
return 0;
}
