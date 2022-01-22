#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10},start=0,end=9,mid,num;
    cin>>num;
    mid=(start+end)/2;
    
    while(start<=end)
    {
        if(arr[mid]==num)
    {
        cout<<"have the element in the index"<<mid<<endl;
        return 0;
    }
    else if(arr[mid]<num)
    {
        start=mid+1;
    }else if(arr[mid]>num)
    {
        end=mid-1;
    }
    mid=(start+end)/2;
    }
     cout<<" not have the element in the index "<<endl;

    return 0;
}
