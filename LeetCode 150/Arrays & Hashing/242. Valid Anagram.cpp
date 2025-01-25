// https://leetcode.com/problems/valid-anagram/description/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:
    //TC-> O(nlog(n))
    bool isAnagram1(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }

    //TC-> O(n)
    bool isAnagram2(string s, string t) {
        if(s.length()!=t.length()){
            return 0;
        }
        unordered_map<char,int>mp;
        for(auto &it:s){
            mp[it]++;
        }
        for(auto &it:t){
            mp[it]--;
        }
        for(auto &[x, y]:mp){
            if(y>0){
                return 0;
            }
        }
        return 1;
    }
};

int main(){
    FAST
    string s, t;
    cin>>s>>t;
    Solution sol;
    cout<<boolalpha<<sol.isAnagram(s, t)<<endl;
    return 0;
}

