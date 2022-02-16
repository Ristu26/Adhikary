#include <iostream>
using namespace std;
int main()
{
  int number;
  int factorial=1;
  cout<<"Enter the number:";
  cin>>number;
  if(number<0)
  {
    cout<<"don't have the factorial for negetive number";
  }
  else
{
  for(int i=number;i>=2;i--)
  {
    factorial =factorial*i;
  }
  cout<<number<<"!="<<factorial;
}
return 0;
}
