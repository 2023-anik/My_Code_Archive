#include <bits/stdc++.h> 
using namespace std;

int find_the_duplicate(int arr[], int n){
    int XOR=0;
    for(int i=0; i<n; ++i)
        XOR^=arr[i];
    for(int i=1; i<n; ++i){
        XOR^=i;
    }
    return XOR;
}

int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<find_the_duplicate(arr, n)<<endl;
    return 0; 
} 