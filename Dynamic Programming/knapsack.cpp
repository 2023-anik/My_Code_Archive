#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

int knapsack(int n, int* weight, int* value, int w){
    if(n==0||w==0)
        return 0;
    if(weight[n-1]<=w){
        //duita option
        //niye dekhbo, na niye dekhbo
        int op1 = knapsack(n - 1, weight, value, w - weight[n - 1])+ value[n-1];
        int op2 = knapsack(n - 1, weight, value, w);
        return max(op1, op2);
    }
    else{
        int op2 = knapsack(n - 1, weight, value, w);
        return op2;
    }
}

void solve(){
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    for (int i = 0; i < n; i++)
        cin >> value[i];
    int w;
    cin >> w;
    cout << knapsack(n, weight, value, w) << endl;
    return;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}