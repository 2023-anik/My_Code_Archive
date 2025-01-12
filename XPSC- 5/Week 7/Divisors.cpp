#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    //O(n) approach
    for (int i = 1; i <= n; i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    cout << endl;

    //O(root(n)) approach
    for (int i = 1; i <= sqrt(n); i++){//i<=sqrt(n)=>i*i<=n
        if(n%i==0){
            cout << i << " ";
            if(n/i!=i){//to avoid the double divisors
                cout << n / i << " ";
            }
        }
    }

    return 0;
}