#include <iostream>
using namespace std;
int main()
{
   int num;
   int first=0,second=1,next;
   cout<<"Enter the number:";
   cin>>num;
   cout<<"The Series is:"<<endl;
   for(int i=0;i<=num;i++)
   {
     cout<<first<<" ";
     next=first+second;
     first=second;
     second=next;
   }
   return 0;
}
