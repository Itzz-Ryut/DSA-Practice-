// Problem: Find the first duplicate element in an array
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Brute-force nested loop — compare each element with all following elements
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;
void findingFirstDuplicate(vector<int> a){
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i+1; j < a.size(); j++)
        {
            if (a[i] == a[j]){
            cout << a[i] << endl;
            return;}
        }
        
    }
}

int main (){
    vector<int> arr = {1, 3, 5, 4, 3, 5};
    findingFirstDuplicate(arr);
}