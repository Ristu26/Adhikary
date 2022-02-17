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
   cout<<"Decimal number:"<<dec<<endl;
   int rem=0;
   i=1;
   int j=0;
  char arr[50];
    while(dec>0)
    {
    rem=dec%16;
    if(rem<10)
        arr[j++]=48+rem;
        else 
        arr[j++]=55+rem;
        dec=dec/16;
    }
    for(int i=j-1;i>=0;i--)
    {
     cout<<"hexa number is:"<<arr[i];
     }
    return 0;
}
