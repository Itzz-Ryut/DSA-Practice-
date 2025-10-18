// Problem: Find the repeating and missing numbers in an array
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Cycle Sort (Index Placement) — swap elements to their correct index
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

void findMissingRepeatingNumbers(vector<int> a) {
    int i = 0;
    while (i< a.size())
    {
        int index = a[i] -1;
        if (a[i] != a[index])
        {
            swap(a[i], a[index]);
        }
        else i++;
    }

    int missing = -1, repeating = -1;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != i + 1) {
            repeating = a[i];
            missing = i + 1;
            // cout << missing << " ";
        }
    }
    // cout<< endl;

    cout << "Repeating: " << repeating << ", Missing: " << missing << endl;
    
}


int main()
{
    vector<int> a = {1,3,3, 3, 5};
    findMissingRepeatingNumbers(a);
}