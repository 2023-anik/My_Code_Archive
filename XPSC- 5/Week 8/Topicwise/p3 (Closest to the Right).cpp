// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int lowerBound(const vector<int> &a, int &x){
    int l=0, r=a.size()-1, mid;
    int ans=a.size();
    while(l<=r){
        // mid=l+(r-l)/2;
        mid = (l/2)+(r/2);
        if(x<=a[mid]){
            ans=mid;
            r=mid-1;
        }
        else l = mid+1;
    }
    return ans+1;
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
        auto it = lower_bound(a.begin(), a.end(), x);
        cout<<distance(a.begin(), it)+1<<endl;
        // cout<<lowerBound(a, x)<<endl;
    }
    return 0;
}