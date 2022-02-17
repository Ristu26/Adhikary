#include <iostream>
using namespace std;
int main()
{
  int num,rem,sum=0;
  cout<<"Enter a number:";
  cin>>num;
  int temp=num;
  while(temp!=0)
  {
    rem=temp%10;
    sum=sum+rem;
    temp=temp/10;
  }
  if(num%sum==0)
  {
    cout<<num<<":it is a harshad number";
  }
  else
{
  cout<<num<<":it is not a harshad number";
}
return 0;
}
