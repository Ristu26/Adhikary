#include <iostream>
using namespace std;
int main()
{
  int number,reminder,revnumber;
  cout<<"Enter the number"<<endl;
  cin>>number;
  while(number>0)
  {
    reminder=number%10;
    number=number/10;
    revnumber=revnumber*10+reminder;
  }
  cout<<revnumber;
  return 0;
}
