#include<bits/stdc++.h>
using  namespace std;

//TC-> O(root(N))
map<int, int> primeFactors(int n){
    map<int, int>facts;
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            facts[i]++;
            n /= i;
        }
    }
    if(n>1) facts[n]++;
    return facts;
}

int main(){
    int n;
    cin>>n;
    map<int, int> primeFacts = primeFactors(n);
    int res = 1;
    for(auto &[x, y]:primeFacts)
        // cout<<x<<" "<<y<<endl;
        res *= (y+1);
    
    cout<<(long long)pow(n, res/2)<<endl;
}