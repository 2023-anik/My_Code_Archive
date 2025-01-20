#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

bool binarySearch(int x){
    int l=1, r=x, mid;
    double squ;
    while(l<=r){
        mid=l+(r-l)/2;
        squ = 1.0*mid*mid;
        // cout<<squ<<endl;
        if(squ==x){
            return 1;
        }else if(squ>x){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }return 0;
}


// bool binarySearch(int x) {
//     int root = sqrt(x);  // Compute square root
//     return 1LL * root * root == x;  // Check if it's a perfect square
// }


void solve(){
    int n;
    cin>>n;
    int sum=0;
    int x;
    while(n--){
        cin>>x;
        sum+=x;
    }
    binarySearch(sum)?yes:no;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}