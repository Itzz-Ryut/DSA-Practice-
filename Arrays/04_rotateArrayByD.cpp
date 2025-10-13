// Problem: Rotate an array to the right by 'd' positions
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Use a temporary vector to store last 'd' elements and shift the rest
// Time Complexity: O(n)
// Space Complexity: O(d)


#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr, int d)
{
    int n = arr.size();
    d = d % n; // final shifting target

    if (d == 0)
    {
        return;
    }

    vector<int> temp;

    // move last nth element to temp array
    for (int i = n - d; i < n; i++)
    {
        temp.push_back(arr[i]);
    }
    // shifting main array
    for (int i = n - 1; i >= d; i--)
    {
        arr[i] = arr[i - d];
    }

    //  update main array with shifting
    for (int i = 0; i < d; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    vector<int> arr = {2, 7, 9, 4, 12, 23};
    int d = 3;

    cout << "Array Before: " << endl;
    for (int x : arr)
    {
        cout << x << " " << endl;
    }
    rotateArray(arr, d);
    cout << "Array After: " << endl;
    for (int x : arr)
    {
        cout << x << " " << endl;
    }
}