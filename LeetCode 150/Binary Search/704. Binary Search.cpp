// https://leetcode.com/problems/binary-search/description/?source=submission-ac

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l=0, r=(int)nums.size()-1, mid;
        while(l<=r){
            mid = l+(r-l)/2;
            if(nums[mid]==t){
                return mid;
            }
            else if(t>nums[mid]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return -1;
    }
};

int main(){
    FAST
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    int t;
    cin>>t;
    Solution sol;
    cout<<sol.search(a, t);
    return 0;
}