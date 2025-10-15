// Approach 2: XOR method
// Platform: DSA Practice (Custom / LeetCode-style)
// Time Complexity: O(n)
// Space Complexity: O(1)
// Fastest and most efficient method

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void missingValue(vector<int> a){
    int ans = 0;
    // xor all elements
    for(int i = 0; i < a.size(); i++){
        ans ^= a[i];
    }
    // xor all indexes
    for(int i = 0; i <= a.size(); i++){
        ans ^= i;
    }
    cout << ans << endl;
}

int main(){
    vector<int> arr = {4,5,3,0,2};
    missingValue(arr);
}