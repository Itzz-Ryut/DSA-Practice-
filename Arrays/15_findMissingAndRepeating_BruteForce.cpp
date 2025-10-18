// Problem: Find the repeating and missing numbers in an array
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Brute-force counting each number's frequency
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size();
    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 0 ; j < n; j++)
        {
            if(a[j] == i) count++;
        }
        if(count == 2) repeating = i;
        else if(count == 0) missing = i;

        if ( repeating!= -1 && missing != -1)
            break;
        
    }
    return{ repeating,  missing};
    
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}