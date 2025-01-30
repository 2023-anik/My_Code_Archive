//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        int n=s.length();
        int l=0, r=0, ans=0;
        unordered_map<int, int>freq;
        while(r<n){
            freq[s[r]]++;
            if(freq.size()==k)
                ans = max(ans, r - l + 1);
            while(freq.size()>k && l<r){
                freq[s[l]]--;
                if(freq[s[l]]==0)
                    freq.erase(s[l]);
                l++;
            }
            r++;
        }
        if(ans==0)
            return -1;
        else
            return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends