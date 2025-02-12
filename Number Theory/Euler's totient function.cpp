#include<bits/stdc++.h>
using namespace std;

//Euler's totient function gives the number of coprime numbers to n between 1 and n.
//a and b are coprime if gcd(a, b)=1
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
    int numOfCoprimes = 1;
    for(auto &[x, y]:primeFacts){
        numOfCoprimes *= pow(x, y-1)*(x-1); 
    }
    cout<<numOfCoprimes<<endl;
}