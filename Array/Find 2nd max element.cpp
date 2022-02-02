#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,5,7,9,3,1};
    int max=-100;
    int a;
    for (int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
    if (arr[i]>max)
    {
    max=arr[i];
    a=i;
    }
    }
    max=-100;
    for (int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
    if (a==i)
    {
    continue;
    }
    if (arr[i]>max)
    {
    max=arr[i];
    }
    }
    cout<<"2nd largest element"<<max<< endl;
    return 0;
    }
  
