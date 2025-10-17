// Problem: Maximum Average Subarray
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Brute Force — compute all subarray sums of length k
// Time Complexity: O(n * k)
// Space Complexity: O(1)


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double maxAvg(vector<int> a, int k){
    int maxSum = INT_MIN;
    


    for (int i = 0; i <= a.size() - k; i++)
    {
        int sum = 0;
        for(int j = i; j< k+i; j++){
             sum += a[j];
            }
            maxSum = max(maxSum, sum);
    }
        return (double)maxSum/k;
    
}

int main(){
    vector<int> arr = {1,12,-5,-6,50,3};
    int k = 4;

    float ans = maxAvg(arr, k);
    cout<< "Maximum average is: " << ans << endl;
}