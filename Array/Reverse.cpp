#include <iostream>
using namespace std;
int main()
{
    int arr1[]={5,4,3,2,1};
    int arr2[20];
    int length=4;
    for(int i=0;i<=length;i++)
    {
        arr2[i]=arr1[length-i];
    }
    for (int i=0; i<=length;i++)
    {
        cout<<arr2[i]<< " ";
    }
    return 0;
}
