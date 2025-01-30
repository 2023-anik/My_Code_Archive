#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Bottom Up Approach
int fibo(int n){
    if(n==1 || n==0){
        return n;
    }
    vector<int>a(n);
    a[0]=0, a[1]=1;
    for(int i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    return a[n];
}

int main(){
    FAST
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}