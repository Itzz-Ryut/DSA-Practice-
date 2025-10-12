// Problem: Find the unique number in an array where every other element appears twice
// Platform: Custom / LeetCode-style
// Approach: XOR operation — since a ^ a = 0 and a ^ 0 = a
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

int uniqueNumber(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    
    return ans;
}

int main(){
    int arr[] = {2, 2, 5 ,1 ,5};
    int size = 5;

    int ans = uniqueNumber(arr, size);
    cout << "Unique number in array is: " << ans << endl;

    return 0;
}