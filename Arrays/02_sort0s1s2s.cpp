#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0 += 1;
        }
        else if (arr[i] == 1)
        {
            count1 += 1;
        }
        else
            count2 += 1;
    }

    int j = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[j++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[j++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[j++] = 2;
    }
    
}

int main()
{

    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}