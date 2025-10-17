// Problem: Maximum Average Subarray
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Sliding Window — update sum as window slides
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double maxAvg(vector<int> a, int k){
    int sum = 0;
    for(int j = 0; j< k; j++){
         sum += a[j];
        }
    int maxSum = sum;    

    int i = k;
    while (i< a.size())
    {
        sum += a[i];
        sum -= a[i - k];
        i++;
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