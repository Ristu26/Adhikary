#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int x;
  cout<<"Press 1 for decimal to binary convertion"<<endl;
  cout<<"Press 2 for decimal to octal convertion"<<endl;
  cout<<"Press 3 for decimal to hexa convertion"<<endl;
  cout<<"Press 4 for binary to decimal convertion"<<endl;
  cout<<"Press 5 for binary to octal convertion"<<endl;
  cout<<"Press 6 for binary to hexa convertion"<<endl;
  cout<<"Press 7 for octal to decimal convertion"<<endl;
  cout<<"Press 8 for octal to binary convertion"<<endl;
  cout<<"Press 9 for octal to hexa convertion"<<endl;
  cout<<"Press 10 for hexa to decimal convertion"<<endl;
  cout<<"Press 11 for hexa to binary convertion"<<endl;
  cout<<"Press 12 for hexa to octal convertion"<<endl;
  cin>>x;
  if(x==1)
  {
    int a;
    cout<<"The number in decimal:";
    cin>>a;
    int c=0;
    int i=0;
    while(a>0)
    {
     c=c+((a%2)*pow(10,i));
     a=a/2;
     i++;
    }
    cout<<"The Number in Binary:"<< c;
    return 0;
  }
  if(x==2)
  {
     int a;
    cout<<"The number in decimal:";
    cin>>a;
    int c=0;
    int i=0;
    while(a>0)
    {
     c=c+((a%8)*pow(10,i));
     a=a/8;
     i++;
    }
    cout<<"The Number in octal:"<< c;
    return 0;
  }
  if(x==3)
  {
    int num,rem,temp,i,j=0;
  char arr[50];
    cout << "The number in decimal:";
    cin>>num;
    temp=num;
    while(temp>0)
    {
    rem=temp%16;
    if(rem<10)
        arr[j++]=48+rem;
        else 
        arr[j++]=55+rem;
        temp=temp/16;
    }
    for(int i=j-1;i>=0;i--)
    {
     cout<<arr[i];
     }
    return 0;
  }
  if(x==4)
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
  if(x==5)
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
  if(x==6)
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
  if(x==7)
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
  if(x==8)
  {
    int num,i=0,oct=0,rem=0;
   cout<<"Enter the octal number:";
   cin>>num;
   while(num>0)
   {
     rem=num%10;
     oct=oct+(rem*pow(8,i));
     num=num/10;
     i++;
   }
   cout<<"Decimal number:"<<oct<<endl;
    long c = 0;
    rem=0;
    i=1;
    while(oct>0)
    {
      rem=oct%2;
        c = c + (rem*i);
        oct=oct/2;
        i=i*10;
    }
    cout <<"The Number in Binary " << c;
    return 0;
  }
  if(x==9)
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
  if(x==10)
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
    rem = rem-48;
    else if(rem>=65 && rem<=70)
    rem = rem-55;
    else if(rem>=97 && rem<=102)
    rem = rem-87;
    else
    {
    cout<<"invalid"<<endl;
    break;
     }
    dec=dec+(rem*pow(16,i));
    len--;
    i++;
    }
    cout<<"decimal number is:"<<dec<<endl;
    return 0;
  }
  if(x==11)
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
    rem = rem-48;
    else if(rem>=65 && rem<=70)
    rem = rem-55;
    else if(rem>=97 && rem<=102)
    rem = rem-87;
    else
    {
    cout<<"invalid"<<endl;
    break;
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
  if(x==12)
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
    rem = rem-48;
    else if(rem>=65 && rem<=70)
    rem = rem-55;
    else if(rem>=97 && rem<=102)
    rem = rem-87;
    else
    {
    cout<<"invalid"<<endl;
    break;
     }
    dec=dec+(rem*pow(16,i));
    len--;
    i++;
    }
    cout<<"decimal number is:"<<dec<<endl;
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
}
