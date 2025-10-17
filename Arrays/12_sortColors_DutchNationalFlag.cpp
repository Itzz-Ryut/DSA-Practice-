// Problem: Sort Colors (0s, 1s, and 2s)
// Platform: DSA Practice (Custom / LeetCode #75)
// Approach: Dutch National Flag Algorithm — using three pointers (low, mid, high)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &a)
{
    int i = 0, j = 0, l = a.size() - 1;
    while (j <= l)
    {
        if (a[j] == 0)
        {
            swap(a[i], a[j]);
            i++;
            j++;
        }
        else if (a[j] == 1)
        {
            j++;
        }
        else
        {
            swap(a[j], a[l]);
            l--;
        }
    }
    for (int x : a)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> colors = {2, 0, 2, 1, 1, 0};
    sortColors(colors);
}