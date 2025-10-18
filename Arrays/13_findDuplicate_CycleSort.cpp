// Problem: Find the duplicate number in an array
// Platform: DSA Practice (Custom / LeetCode #287)
// Approach: Cycle sort method — place each number at its correct index
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int dupicateNumber(vector<int> a){
    while (a[0] != a[a[0]])
    {
        swap(a[0], a[a[0]]);
    }
    return a[0];
}

int main (){
    vector<int> arr = { 1, 4, 3, 3, 2};
    int ans = dupicateNumber(arr);
    cout<< ans << endl;
}