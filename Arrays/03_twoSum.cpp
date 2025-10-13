#include <iostream>
#include <vector>
using namespace std;

vector<int>twoSum(vector <int> arr, int target){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i +1; j < n; j++)
        {
            if(arr[i] + arr[j] == target){
            return{i, j};}
        }
        
    };
    return {};
}

int main (){

    vector<int> arr = {20, 40, 30, 50, 10};
    int target = 80;

    vector<int> ans = twoSum(arr, target);
    cout<< "[" << ans[0] << " " << ans[1] << "]" << endl;
}