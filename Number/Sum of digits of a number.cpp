#include <iostream>
using namespace std;
int main()
{
  int num, reminder,sum=0;
  cout<<"Enter the number:";
  cin>>num;
  while(num>0)
  {
    reminder=num%10;
    sum=sum+reminder;
    num=num/10;
  }
  cout<<"sum of the digits:"<<sum;
  return 0;
}
