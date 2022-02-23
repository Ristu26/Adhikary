#include<iostream>
using namespace std;
int main()
{ 
    int arr[5]={1,2,3,4,5};
    int arr2[10]={};
    int a=0,k=2,n=5;
    for(int i=k;i<n;i++)
    {
        arr2[a]=arr[i];
        a++;
    }
    for(int i=0;i<k;i++)
    {
        arr2[a]=arr[i];
        a++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
