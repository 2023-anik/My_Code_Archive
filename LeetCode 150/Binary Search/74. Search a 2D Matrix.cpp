// https://leetcode.com/problems/search-a-2d-matrix/description/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size(), COLS = matrix[0].size();

        int l = 0, r = ROWS * COLS - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            int row = m / COLS, col = m % COLS;
            if (target > matrix[row][col]) {
                l = m + 1;
            } else if (target < matrix[row][col]) {
                r = m - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main(){
    FAST
    int m, n;//m=rows and n=columns
    cin>>m>>n;
    vector<vector<int>>a(m, vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int t;
    cin>>t;
    Solution sol;
    cout<<boolalpha<<sol.searchMatrix(a, t)<<endl;
    // cout<<a.size()<<" "<<a[0].size()<<endl;
    cout<<
    return 0;
}