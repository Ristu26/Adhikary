#include <iostream>
using namespace std;
int main() 
{
 int n;
   cout<<"Enter the number of terms:"<<endl;
   cin>>n;
   if (n<1)
   {
     cout<<"The term is not valid:";
   }
   else
{
  int d;
  cout<<"Enter common difference:";
  cin>>d;
  int a;
  cout<<"Enter first terminal:";
  cin>>a;
  int sum=n/2*(2*a+(n-1)*d);
  cout<<sum;
}
return 0;
}
