// Problem: Print a 2D matrix in spiral order (clockwise traversal)
// Platform: DSA Practice (Custom / LeetCode-style)
// Approach: Boundary-based traversal — use four pointers (top, right, bottom, left)
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector < vector <int>> matx){
    int rsize = matx.size();
    int csize = matx[0].size();

    int top = 0,
        right = csize-1,
        bottom = rsize-1,
        left = 0;

    int max = rsize*csize;
    int count = 0;

    while (count < max)
    {
        // for top side
        for(int i = top; i <= right && count <= max; i++){
            cout << matx[top][i] << " ";
            count++;
        }
        top++;

        if (count >= max) break;
        // for right side
        for(int i = top; i <= bottom && count <= max; i++){
            cout << matx[i][right] << " ";
            count++;
        }
        right--;
        if (count >= max) break;

        // for bottom side
        for(int i = right; i >= left && count <= max; i--){
            cout << matx[bottom][i] << " ";
            count++;
        }
        bottom--;
        if (count >= max) break;

        // for left side
        for(int i = bottom; i >= top && count <= max; i--){
            cout << matx[i][left] << " ";
            count++;
        }
        left++;
    }
    return;
    
}

int main(){
    vector < vector <int>> matrix = {
        {1, 2, 3, 0},
        {4, 5, 6, 0},
        {7, 8, 9, 0}
    };
    spiralPrint(matrix);
}