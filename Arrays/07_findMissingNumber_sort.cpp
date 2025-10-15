// Approach 1: Sorting method
// Platform: DSA Practice (Custom / LeetCode-style)
// Time Complexity: O(n log n)
// Space Complexity: O(1)
// (because of sorting)
// Simple, but slower than XOR for large arrays


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void missingValue(vector<int> a){
    //  Sorting array
    sort(a.begin(), a.end());

    // loop array and match from index
    for (int i = 0; i < a.size(); i++){
        if(i != a[i]){ 
            cout << i << endl;
            return; 
        }
    }
        cout << a.size() << endl;

}
// void missingValue(vector<int> a){
//     int ans = 0;
//     for(int i = 0; i < a.size(); i++){
//         ans ^= a[i];
//     }
//     for(int i = 0; i <= a.size(); i++){
//         ans ^= i;
//     }
//     cout << ans << endl;
// }

int main(){
    vector<int> arr = {4,5,3,0,2};
    missingValue(arr);
}