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
   cout<<"Decimal number:"<<oct<<endl;
   int j=0,rem=0;
   i=1;
  char arr[50];
    while(oct>0)
    {
    rem=oct%16;
    if(rem<10)
    {
        arr[j++]=48+rem;
        }
        else 
        {
        arr[j++]=55+rem;
        }
        oct=oct/16;
    }
    for(int i=j-1;i>=0;i--)
    {
     cout<<arr[i];
     }
     return 0;
}
