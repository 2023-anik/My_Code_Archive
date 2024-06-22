#include <bits/stdc++.h> 
using namespace std;
//two pointer method
int main() 
{ 
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        while(arr[i]==0 && i<j){
            i++;
        }
        
        while(arr[j]==1 && i<j){
            j--;
        }
        
        swap(arr[i], arr[j]);
            i++;
            j--;
    }
    for(int i=0; i<n; ++i)
        cout<<arr[i]<<' ';

    return 0; 
} 