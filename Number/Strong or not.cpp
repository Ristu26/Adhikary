#include <iostream>
using namespace std;
int main()
{
  int num,a,sum=0,rem;
  cout<<"Enter a number:";
  cin>>num;
  int temp=num;
  while(num>0)
  {
    rem=num%10;
    a=1;
    for(int i=1;i<=rem;i++)
    {
      a=a*i;
    }
    sum=sum+a;
    num=num/10;
  }
  if(temp==sum)
  {
    cout<<"Strong number"<<endl;
  }
  else
{
  cout<<"not a strong number"<<endl;
}
  return 0;
}
