// Problem: Find the duplicate number in an array
// Platform: DSA Practice (Custom / LeetCode #287)
// Approach: Brute force — check every pair (nested loops)
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int dupicateNumber(vector<int> a){
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == a[j]) return a[i];
        }
    }
}


int main (){
    vector<int> arr = { 1, 4, 3, 3, 2};
    int ans = dupicateNumber(arr);
    cout<< ans << endl;
}