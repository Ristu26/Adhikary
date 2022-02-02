#include <iostream>
using namespace std;
int main()
{
  int a[]={1,2,3,4,5,6,7,8,9};
  int sum=0;
  for(int i=0;i<sizeof(a)/sizeof(int);i++){
      sum=sum+a[i];
      }
      cout<<"your sum/total is"<<sum<<endl;
    
  return 0;
  }
