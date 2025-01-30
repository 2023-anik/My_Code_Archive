//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
    vector<int>ans;
    queue<int>q;
    int n = arr.size(), i=0, j=0;
    while(j<n){
        if(arr[j]<0)
            q.push(arr[j]);
        if(j-i+1==k){
            if(!q.empty()){
                ans.push_back(q.front());
                if(q.front()==arr[i])
                    q.pop();
            }
            else ans.push_back(0);
            i++;
        }j++;
    }
    return ans;
}
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

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
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends