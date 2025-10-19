// Problem: Find common elements in three sorted arrays
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Three-pointer technique with a set to store unique common elements
// Time Complexity: O(n1 + n2 + n3)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> commonElements(vector<int> a, vector<int> b, vector<int> c)
{
    set<int> st;
    vector<int> ans;

    int i = a.size(), j = b.size(), k = c.size();
    int n1 = 0, n2 = 0, n3 = 0;

    while (n1 < i && n2 < j && n3 < k)
    {
        if (a[n1] == b[n2] && b[n2] == c[n3])
        {
            st.insert(a[n1]);
            n1++, n2++, n3++;
        }
        else if (a[n1] < b[n2])
            n1++;
        else if (b[n2] < c[n3])
            n2++;
        else
            n3++;
    }
    for (auto x : st)
    {
        ans.push_back(x);
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 1, 1, 2, 2, 2},
                arr2 = {1, 1, 2, 2, 2},
                arr3 = {1, 1, 1, 1, 2, 2, 2, 2};

    vector<int> ans = commonElements(arr1, arr2, arr3);
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}