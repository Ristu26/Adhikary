#include <iostream>
using namespace std;
int main()
{
   int num1,num2;
   cout<<"Enter 1st number:";
   cin>>num1;
   cout<<"Enter 2nd number:";
   cin>>num2;
  int sum = 0;
  for (int i=num1;i<=num2;i++){
    sum=sum+i;
  }
  cout << "The sum of numbers in the given range is "<<sum;
return 0;
}
