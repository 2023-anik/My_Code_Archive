#include<bits/stdc++.h>
using namespace std;


//TC-> O(root(N))
vector<int> primeFactors(int n){
    vector<int>fact;
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            fact.push_back(i);
            n /= i;
        }
    }
    if(n>1) fact.push_back(n);
    return fact;
}

int main(){
    int n; 
    cin>>n;
    vector<int> primesFact = primeFactors(n);
    for(auto it:primesFact)
        cout<<it<<" ";
    cout<<endl;
}