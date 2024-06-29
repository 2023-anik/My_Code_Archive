// Straightforward approach in O(N*N*N)

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void print_subarrays(int *arr){
    for(int l=0; l<8; l++)
        for(int r=l; r<8; r++){
            for(int i=l; i<=r; i++)
                cout<<arr[i]<<' ';
            cout<<endl;
    }  
}

int maximum_sum_of_subarray(int *arr){
    int max_sum=0;
    for(int l=0; l<8; l++)
        for(int r=l; r<8; r++){
            int sum=0;
            for(int i=l; i<=r; i++)
                // cout<<arr[i]<<' ';
                sum+=arr[i];
            max_sum=max(max_sum, sum);
            // cout<<endl;
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