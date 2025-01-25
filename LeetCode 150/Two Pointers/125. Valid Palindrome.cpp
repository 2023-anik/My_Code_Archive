// https://leetcode.com/problems/valid-palindrome/description/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:

    //TC->O(n) and SC->O(1), if we use reversing approach then check two string is equal or not it takes extra spaces
    bool isPalindrome(string s) {
        int l=0, r=(int)s.length()-1;
        while(l<=r){
            if(!isalnum(s[l])){
                l++;
            }else if(!isalnum(s[r])){
                r--;
            }else if(tolower(s[l])!=tolower(s[r])){
                return 0;
            }
            else{
                l++, r--;
            }
        }
        return 1;
    }
};

int main(){
    FAST
    string s;
    cin>>s;
    Solution sol;
    cout<<boolalpha<<sol.isPalindrome(s)<<endl;
    return 0;
}