#include <iostream>
using namespace std;
int main()
{
   long num,rem,high,low;
   cout<<"Enter an number:";
  cin>>num;
  high=0;
   low=9;
   while(num!=0)
   {
     rem=num%10;
     if(rem>high)
       high=rem;
     if(rem<low)
     low=rem;
     num=num/10;
   }
   cout<<"Higest number:"<<high<<endl;
   cout<<"lowest number:"<<low<<endl;
   return 0;
}
