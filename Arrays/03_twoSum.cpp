// Problem: Find the pair of indices whose elements sum up to a given target (Two Sum)
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Brute Force — check all possible pairs
// Time Complexity: O(n²)
// Space Complexity: O(1)


#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
            }
        }
    };
    return {};
}

int main()
{

    vector<int> arr = {20, 40, 30, 50, 10};
    int target = 80;

    vector<int> ans = twoSum(arr, target);
    cout << "[" << ans[0] << " " << ans[1] << "]" << endl;
}