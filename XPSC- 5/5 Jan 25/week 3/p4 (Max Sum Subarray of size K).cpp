//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int s = arr.size();
        int i = 0, j = 0, maxSum = 0, sum = 0;
        while(j<s){
            sum+=arr[j];
            if(j-i+1==k){
                maxSum = max(maxSum, sum);
                sum -= arr[i];
                i++, j++;
            }else j++;
        }
        return maxSum;
    }
};

void solve(){
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    string ks;
    getline(cin, ks);
    int k = stoi(ks);
    Solution ob;
    int ans = ob.maximumSumSubarray(arr, k);
    cout << ans << "\n";
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}