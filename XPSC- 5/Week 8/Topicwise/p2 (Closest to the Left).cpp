// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int upperBound(const vector<int> &a, int &x){
    int l=0, r=a.size()-1, mid;
    // bool ok=0;
    int ans=-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(x>=a[mid]){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    // if(ans)
    return ans+1;
    //return 0;
}

int main(){
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    int x;
    while(k--){
        cin>>x;
        // auto it = upper_bound(a.begin(), a.end(), x);
        // cout<<distance(a.begin(), it)<<endl;

        cout<<upperBound(a, x)<<endl;
    }
    return 0;
}