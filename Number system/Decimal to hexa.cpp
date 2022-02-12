#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int num,rem,temp,i,j=0;
  char arr[50];
    cout << "The number in decimal ";
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
