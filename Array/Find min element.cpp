#include <iostream>
using namespace std;

int main ()
{
  int arr[]={2,5,7,13,5,-2,14,22,71,51,46,29,24,2};
  int min=arr[0];
  int a=0;
  for(int i =0;i<sizeof(arr)/sizeof(int);i++)
  {
    if(min>arr[i]){
      min=arr[i];
      a=i;
    }
  }
  cout<<min<<endl<<a<<endl;
  return 0;
}
