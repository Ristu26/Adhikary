#include <iostream>
using namespace std;
int main()
{
   int num,temp,rem,b,a=0,n=10;
   cout<<"Enter a number:";
   cin>>num;
   b=num*num;
   temp=b;
   while(temp!=0)
   {
     rem=b%n;
     if(rem==num)
     {
       a=1;
       break;
     }
     temp=temp/10;
     n=n*10;
   }
   if(a==1)
   cout<<"it is a automorphic number";
   else
   cout<<"it is not a automorphic number";
   return 0;
}
