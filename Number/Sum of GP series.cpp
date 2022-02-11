#include <iostream>
using namespace std;
int main()
{
   int n;
   int b=1;
   cout<<"Enter the number of terms:"<<endl;
   cin>>n;
   if (n<2)
   {
     cout<<"The term is not valid:";
   }
   else
{
  int r;
  cout<<"Enter common ratio:";
  cin>>r;
  int c;
  cout<<"Enter first terminal:";
  cin>>c;
  for(int i =1;i<=n;i++)
  {
    b=b*r;
  }
  int sum=c*((1-b)/(1-r));
  cout<<sum;
}
return 0;
}
