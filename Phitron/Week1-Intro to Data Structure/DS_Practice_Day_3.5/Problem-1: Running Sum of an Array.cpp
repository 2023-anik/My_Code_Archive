#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int running_sum(int a, int b){
    return a+b;
}

int main(){
    int n; cin>>n;
    int sum=0;
    vector<int>nums(n);
    for (int i=0; i<n; i++) cin >> nums[i];

    for(int i=0; i<n; i++){
        sum=running_sum(nums[i], sum);
        cout<<sum<<' ';
    }
    return 0;
}