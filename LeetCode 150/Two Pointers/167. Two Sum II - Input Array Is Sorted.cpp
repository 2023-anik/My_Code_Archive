// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:

    //TC->O(n) & SpaceC->O(1) by using two pointer method
    vector<int> twoSum(vector<int>& nums, int t) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            if (nums[l] + nums[r] > t) r--;
            else if (nums[l] + nums[r] < t) l++;
            else return {l + 1, r + 1};
        }
        return {};
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
    vector<int>ans=sol.twoSum(a, t);
    for(auto &it:ans){
        cout<<it<<" ";
    }cout<<endl;
    return 0;
}