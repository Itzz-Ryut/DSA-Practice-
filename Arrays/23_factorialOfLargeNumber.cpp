// Problem: Factorial of a Large Number
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Simulate manual multiplication using an array (vector) to store digits
// Time Complexity: O(n²) — due to nested multiplication and carry propagation
// Space Complexity: O(n) — for storing the resulting digits

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorialOfLargeNumber(int a){
    vector<int> fact = {1};
    for(int i = 2; i <= a; i++){
        int carry = 0;
        for(int j = 0; j < fact.size();  j++){
            int x = fact[j] * i + carry;
            fact[j] = x % 10;
            carry =  x/10;
        }
        while (carry) {
            fact.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(fact.begin(), fact.end());
    return fact;
}

int main(){
    int fact = 5;

    vector<int> ans = factorialOfLargeNumber(fact);
    for(int x : ans){
        cout << x ;
    }
    cout<< endl;
}