//It's an algorithm for finding all the prime numbers in a segment [1; n], using O(nloglogn) ops

#include<bits/stdc++.h>
using namespace std;

int n;
int sieve[1000]={0};

void primeNumbers(int n){
    for(int i=2; i<=n; i++){
        if(sieve[i]) continue;
        for(int j=2*i; j<=n; j+=i){
            sieve[j] = i;
        }
    }
}

int main(){
    cin>>n;
    primeNumbers(n);
    for(int i=2; i<=n; i++){
        if(sieve[i]==0)
            cout<<i<<" ";
    }
}