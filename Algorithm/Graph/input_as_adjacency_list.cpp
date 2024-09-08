#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n, e;
    cin>>n>>e;
    vector<int>arr[n];
    while(e--){
        int a, b; 
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);//for undirected graph
    }
    //to check which values are connected with zero(0)
        //way 1
        // for(auto x:arr[0])
        //     cout<<x<<endl;

        // cout<<endl;
        // //way 2
        // for(int i=0; i<arr[0].size(); i++)
        //     cout<<arr[0][i]<<endl;

    //to check which values are connected with 3
    // for(auto x:arr[3])
    //     cout<<x<<endl;

    //
    //to see which node is connected with other nodes
    for(int i=0; i<n; i++)
        for(auto x:arr[i])
            cout<<i<<" "<<x<<endl;
    return 0;
}