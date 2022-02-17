#include <iostream>
using namespace std;
int main()
{
   int num,p,rem,sum=0,count=0;
   cout<<"Enter a number:";
   cin>>num;
   int E=num;
   int temp=num;
    while (num>0)
    {
    num=num/10;
    count=count+1;
    }
    while(E>0)
    {
      rem=E%10;
      p=1;
      for(int i=1;i<=count;i++)
      {
        p=p*rem;
      }
      sum=sum+p;
      E=E/10;
    }
   if (temp==sum)
   {
     cout<<temp<<":is a Armstrong number";
   }
   else
{
  cout<<temp<<":is not a Armstrong number";
}
   return 0;
}
