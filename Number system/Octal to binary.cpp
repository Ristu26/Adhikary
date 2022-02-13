#include <iostream>
#include<math.h>
using namespace std;
int main()
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
