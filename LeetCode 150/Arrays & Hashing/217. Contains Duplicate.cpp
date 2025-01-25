// https://leetcode.com/problems/contains-duplicate/description/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:
    //sol(1) TC->O(N)
    bool containsDuplicate1(vector<int>& nums) {
        return unordered_set<int>(nums.begin(), nums.end()).size()<nums.size();
    }

    //sol(2) TC->O(Nlog(N))
    bool containsDuplicate2(vector<int>& nums){
        sort(nums.begin(), nums.end());
        int i;
        for(i=0; i<(int)nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                return 1;
            }
        }
        return 0;
    }

    //sol(3) Brute Force; TC->O(N*N)
    bool containsDuplicate3(vector<int>& nums){
        int i, j;
        for(i=0; i<(int)nums.size(); i++){
            for(j=i+1; j<(int)nums.size(); j++){
                if(nums[i]==nums[j]){
                    return 1;
                }
            }
        }
        return 0;
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
    Solution sol;
    cout<<boolalpha<<sol.containsDuplicate3(a)<<endl;
    return 0;
}