#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int num,temp,i=0,dec=0,rem=0;
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
   long c=0;
   rem=0;
   i=1;
    while(dec>0)
    {
      rem=dec%8;
        c=c+(rem*i);
        dec=dec/8;
        i=i*10;
    }
    cout <<"The Number in octal:"<< c;
    return 0;
} 
