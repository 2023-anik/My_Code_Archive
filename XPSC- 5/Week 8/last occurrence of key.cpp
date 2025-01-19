#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int lastOccurrece(vector<int>a, int n, int key){
    int l=0, r=n-1, mid, ans=-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(key==a[mid]){
            ans = mid;
            l=mid+1;
        }else if(key>a[mid]){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return ans;//0 besed index
}

int main(){
    vector<int>a={2, 4, 6, 6, 7, 8, 8, 8, 10, 12};
    cout<<lastOccurrece(a, 10, 8)<<endl;

    auto it=upper_bound(a.begin(), a.end(), 8);
    cout<<distance(a.begin(), it)-1<<endl;
}