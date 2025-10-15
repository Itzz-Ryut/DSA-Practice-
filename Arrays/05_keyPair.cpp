// Problem: Check if there exists a pair in the array with a given sum
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Two-Pointer Technique after sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasArrayTwoValues(vector<int> arr, int sum)
{
    sort(arr.begin(), arr.end());
    int l = 0;
    int h = arr.size() - 1;

    while (l < h)
    {
        int x = arr[l] + arr[h];
        if (sum == x)
            return true;
        else if (x > sum)
            h--;
        else
            l++;
    }
    return false;
}

int main()
{
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = 0;

    bool ans = hasArrayTwoValues(arr, target);
    cout << "Arrayc contained specific key pair: " << (ans ? "true" : "false") << endl;

    return 0;
}