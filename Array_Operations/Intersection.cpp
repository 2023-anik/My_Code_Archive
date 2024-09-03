#include <bits/stdc++.h> 
using namespace std;
const int N=1e5+10;
int hash_table[N];
int main() 
{ 
    int n, m;
    cin>>n;
    int arr1[n];
    
    arr1[0]=hash_table[0]=0;
    for(int i=1; i<=n; i++){
        cin>>arr1[i];
        hash_table[arr1[i]]++;
    }
    cin>>m;
    int arr2[m];
    arr2[0]=0;
    for(int i=1; i<=m; ++i){
        cin>>arr2[i];
    }
    
    for(int i=1; i<=m; i++){
        if(hash_table[arr2[i]]>0){
            cout<<arr2[i]<<' ';
            hash_table[arr2[i]]--;
        }
    }
    
    return 0; 
} 