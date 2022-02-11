#include <iostream>
using namespace std;
int main()
{
    int arr1[6] = {10, 5, 10, 15, 10, 5};
    int arr2[6] = {};
    int c, a, k = 0, temp;
    int count;
    for (int i = 0; i < 6; i++)
    {
        c = arr1[i];
        a = 0;
        for (int j = 0; j <= k; j++)
        {
            if (arr2[j] == c)
            {
                a = 1;
                break;
            }
        }
        if (a == 0)
        {
            arr2[k] = c;
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        count = 0;
        cout << arr2[i] << " : ";

        for (int j = 0; j < 6; j++)
        {
            if (arr1[j] == arr2[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
