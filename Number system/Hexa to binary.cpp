#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int dec=0,rem,i=0,len=0;
    char hex[20];
    cout<<"Enter the Hexadecimal Number:";
    cin>>hex;
    while(hex[i]!=0)
    {
    len++;
    i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
    rem=hex[len];
    if(rem>=48 && rem<=57)
      {
    rem = rem-48;
      }
    else if(rem>=65 && rem<=70)
     {
    rem = rem-55;
    }
    dec=dec+(rem*pow(16,i));
    len--;
    i++;
    }
    cout<<"decimal number is:"<<dec<<endl;
    long c = 0;
    rem=0;
    i=1;
    while(dec>0)
    {
      rem=dec%2;
        c = c +(rem*i);
        dec=dec/2;
        i=i*10;
    }
    cout <<"The Number in Binary " << c;
    return 0;
}
