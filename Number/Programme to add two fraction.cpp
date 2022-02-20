#include <iostream>
using namespace std;
int main()
{
  int a,b,c,d,e,f;
  char P;
  cout<<"Enter the 1st fraction:";
  cin>>a>>P>>b;
  cout<<"Enter the 2nd fraction:";
  cin>>c>>P>>d;
  e=(a*d)+(b*c);
  f=(b*d);
  cout<<"addition of the two fractions is:";
  cout<<e<<P<<f;
  return 0;
  }
