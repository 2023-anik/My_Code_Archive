#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int>a;

bool subsetSum(int n, int s){
    if(n==0){
        return s==0;
    }
    if(a[n-1]>s){
        return subsetSum(n-1, s);//nibo nah
    }
    else{
        return subsetSum(n-1, s-a[n-1]) || subsetSum(n-1, s);//nibo or nibo nah
    }
}

int main(){
    FAST
    int n;
    cin>>n;
    int i, x;
    for(i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }
    int s;
    cin>>s;
    cout<<(subsetSum(n, s)?"YES":"NO")<<endl;
    return 0;
}