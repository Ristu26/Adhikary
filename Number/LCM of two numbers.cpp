
#include <iostream>
using namespace std;
int main()
{
  int num1,num2,gcd,lcm;
  cout<<"Enter 1st number:";
  cin>>num1;
  cout<<"Enter 2nd number:";
  cin>>num2;
  for(int i=1;i<=num1 && i<=num2;i++)
  {
    if(num1%i==0 &&num2%i==0)
    {
      gcd=i;
    }
  }
  lcm=(num1*num2)/gcd;
  cout<<"LCM is:"<< lcm;
  return 0;
}
