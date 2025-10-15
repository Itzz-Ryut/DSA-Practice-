// Problem: Remove duplicates from a sorted array
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Two-pointer technique — one pointer for unique placement, one for traversal
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

void removeDuplicate(vector<int> &arr)
{
    int i = 0, j = 1;
    while (j < arr.size())
    {
        if (arr[i] == arr[j])
            j++;
        else
            arr[++i] = arr[j++];
    }

    cout << "Number of unique elements: " << i + 1 << endl;
    cout << "Unique elements: ";
    for (int k = 0; k <= i; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 3, 3, 4};
    removeDuplicate(arr);
}