#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)


int32_t main(){
    fast();

    int n, q;
    cin >> n;

    vector<int> nums(n);
    for (int i=0; i<n; i++) cin>>nums[i];

    sort(nums.begin(), nums.end());

    cin>>q;
    while(q--){
        int query;
        cin>>query;
        bool found=binary_search(nums.begin(), nums.end(), query);
        if(found) yes;
        else no;
    }
    return 0;
}