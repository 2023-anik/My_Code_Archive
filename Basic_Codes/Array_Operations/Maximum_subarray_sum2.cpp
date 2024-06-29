// TC of O(N*N)

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)



int maximum_sum_of_subarray(int *arr){
    int max_sum=0;
    for(int l=0; l<8; l++){
        int sum=0;
        for(int r=l; r<8; r++){
            sum+=arr[r];
            max_sum=max(max_sum, sum);
    }
    }
    return max_sum;   
}

void solve(){
    int arr[]={-1, 2, 4, -3, 5, 2, -5, 2};
    // print_subarrays(arr);
    cout<<maximum_sum_of_subarray(arr)<<endl;
}

int32_t main(){
    fast();
    int tc=1; //cin>>tc;
    while(tc--) solve();
    return 0;
}