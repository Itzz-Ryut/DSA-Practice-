// Problem: Find the Pivot Index in an Array
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Prefix sums — compute left and right sums separately, then find index where they match
// Time Complexity: O(n)
// Space Complexity: O(n)


#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &arr)
{
    vector<int> lsum(arr.size(), 0);
    vector<int> rsum(arr.size(), 0);

    // array of left sum
    for (int i = 1; i < arr.size(); i++)
    {
        lsum[i] = lsum[i - 1] + arr[i - 1];
    }
    // array of right sum
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        rsum[i] = rsum[i + 1] + arr[i + 1];
    }
    // finding pivot index
    for (int i = 0; i < arr.size(); i++)
    {
        if (lsum[i] == rsum[i])
            return i;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 7, 3, 6, 5, 6};

    int pivot = findPivotIndex(arr);
    cout << "Pivot Index: " << pivot << endl;
}