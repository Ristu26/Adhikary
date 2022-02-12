#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int num,temp,i=0,dec=0;
   cout<<"Enter the binary number:";
   cin>>num;
   temp=num;
   while(temp>0)
   {
     dec=dec+((temp%10)*pow(2,i));
     temp=temp/10;
     i++;
   }
   cout<<"Decimal number:"<<dec;
   return 0;
}
