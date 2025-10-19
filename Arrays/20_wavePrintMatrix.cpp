// Problem: Print a 2D matrix in wave form (column-wise up-down pattern)
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Traverse columns alternately — top-to-bottom for even index, bottom-to-top for odd index
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

void wavePrint(vector<vector<int>> matx){
    int rsize = matx.size();
    int csize = matx[0].size();

    for(int j = 0; j< csize; j++){
        if(j%2 == 0){
            for(int i = 0; i<rsize; i++)
            cout << matx[i][j] << " ";
        }
        else{
            for(int i = rsize-1; i >= 0; i--)
            cout << matx[i][j] << " ";
        }
    }
    return;
}

int main (){
    vector < vector <int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    wavePrint(matrix);
}