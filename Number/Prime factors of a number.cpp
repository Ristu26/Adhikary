#include <iostream>
using namespace std;
int main()
{
   int num,i;
   cout<<"Enter the number:";
   cin>>num;
   i=2;
   while(num>0)
   {
     if(num%i==0)
     {
      cout<<i<<" ";
      num=num/i;
    }
      else
      {
      i++;
    }
    }
   return 0;
}
