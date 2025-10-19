// Problem: Find the first duplicate element in an array
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Hash Map — store frequency counts and return first repeating element
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findingFirstDuplicate(vector<int> a){
    unordered_map<int, int>hash;
    for (int i = 0; i < a.size(); i++)
    {
        hash[a[i]]++;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if(hash[a[i]]>1){
        return a[i];}
    }
    return -1;
    
}


int main (){
    vector<int> arr = {1, 3, 5, 4, 3, 5};
    cout << findingFirstDuplicate(arr) << endl;
}