#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int num,temp,i=0,oct=0;
   cout<<"Enter the octal number:";
   cin>>num;
   temp=num;
   while(temp>0)
   {
     oct=oct+((temp%10)*pow(8,i));
     temp=temp/10;
     i++;
   }
   cout<<"Decimal number:"<<oct;
   return 0;
}
