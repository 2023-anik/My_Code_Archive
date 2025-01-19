// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool binarySearch(const vector<int> &a, int &x){
    int l=0, r=a.size()-1, mid;
    // bool ok=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(a[mid]==x){
            return 1;
        }
        else if(x<a[mid]){
            r=mid-1;
        }
        else l=mid+1;
    }
    return 0;
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
        cout<<(binarySearch(a, x)?"YES":"NO")<<endl;
    }
    return 0;
}