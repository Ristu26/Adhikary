#include <iostream>

using namespace std;

int main()
{
   int arr[]={14,22,71,51,46,29,24,2};
   int max=arr[0];
   int a=0;
   for(int i=0;i<sizeof(arr)/sizeof(int);i++)
   {
    if(max<arr[i]){
    max=arr[i];
    a = i;
    }
    }
    cout << max << endl << a << endl;
    return 0;
}
