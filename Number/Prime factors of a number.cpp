#include <iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the number:";
   cin>>num;
   while(num!=0)
   {
   for(int i=2;i<=num;i++)
   {
     if(num%i==0)
     {
      cout<<i<<" ";
      num=num/i;
       break;
    }
    }
    }
   return 0;
}
