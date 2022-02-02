#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,7,8,5,1};
    int min=100;
    int a;
    for (int i=0;i<=sizeof(arr)/sizeof(int);i++)
    {
    if(arr[i]< min)
    {
    min=arr[i];
    a=i;
    }
    }
    min=100;
    for(int i=0;i<=sizeof(arr)/sizeof(int);i++)
    {
    if(i==a)
    {
    continue;
    }
    if(arr[i]<min)
    {
    min=arr[i];
    }
    }
    cout<<"2nd smallest element"<<min<<endl;
    return 0;
    }
