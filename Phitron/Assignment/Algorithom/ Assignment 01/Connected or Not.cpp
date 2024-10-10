#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n, e;
    cin>>n>>e;
    int arr[n][n];
    memset(arr, 0, sizeof(arr));
    while(e--){
        int a, b;
        cin>>a>>b;
        arr[a][b]=1;
        // arr[b][a]=1;
    }
    
    int q;
    cin>>q;
    while(q--){
        int a, b;
        cin>>a>>b;
        cout<<((arr[a][b]==1 || a==b)?"YES":"NO")<<endl;
    }
    return 0;
}