// Problem: Sum of Two Arrays (Digit-wise Addition)
// Platform: DSA Practice (Custom)
// Approach: Simulate manual addition using carry, starting from the last digit of both arrays
// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m))

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sumOfTwoArrays(vector<int> a, vector<int> b){
    int m = a.size() - 1;
    int n = b.size() - 1;
    int carry = 0;
    vector<int> c;

    while( m >= 0 || n >= 0 || carry){
        int x = carry;
        if(m >= 0) x += a[m--];
        if(n >= 0) x += b[n--];
        c.push_back(x%10);
        carry = x/10;
    }

    // while (m >= 0 && n >= 0){
    //     int x = a[m] + b[n] + carry;
    //     c.push_back(x%10);
    //     carry = x/10;

    //     m--; n--;
    // }
    // while (m >= 0){
    //     int x = a[m] + carry;
    //     c.push_back(x%10);
    //     carry = x/10;

    //     m--;
    // }
    // while (n >= 0){
    //     int x = b[n] + carry;
    //     c.push_back(x%10);
    //     carry = x/10;

    //     n--;
    // }
    // if( carry != 0){
    //     c.push_back(carry);
    // }
    reverse(c.begin(), c.end());
    return c;
}

int main(){
    vector<int> arr1 ={9, 5, 4, 9};
    vector<int> arr2 = {6, 1, 4};
    
    vector<int> ans = sumOfTwoArrays(arr1, arr2);
    for(int x : ans){
        cout << x ;
    }
    cout<< endl;
}