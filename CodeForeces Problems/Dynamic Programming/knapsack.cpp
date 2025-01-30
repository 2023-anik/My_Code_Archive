#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int knapsack(int n, int w, const vector<int> &wt, const vector<int> &val){
    if(n==-1 || w==0){
        return 0;
    }
    // if(wt[n]<=w){
    //    //option 1: include the item
    //    int op1=val[n]+knapsack(n-1, w-wt[n], wt, val);
    //    //option 2: exclude the item
    //    int op2=knapsack(n-1, w, wt, val);
    //    return max(op1, op2);
    // }else{
    //    //exclude the item
    //    return knapsack(n-1, w, wt, val);
    // }
    if(wt[n]>w){    
        return knapsack(n-1, w, wt, val);
    }
    return max(val[n]+knapsack(n-1, w-wt[n], wt, val), knapsack(n-1, w, wt, val));
}

int main(){
    FAST
    int n, w;
    cin>>n>>w;
    vector<int> wt(n), val(n);
    for(auto &it:wt){
        cin>>it;
    }
    for(auto &it:val){
        cin>>it;
    }
    cout<<knapsack(n-1, w, wt, val)<<endl;// n-1 is passed because indexing is 0 based
    return 0;
}