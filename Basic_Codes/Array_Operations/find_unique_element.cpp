#include <bits/stdc++.h> 
using namespace std;

int find_unique_num(int arr[], int size){
    int unique_num=0;
    for(int i=0; i<size; i++)
        unique_num^=arr[i];
    return unique_num;
}

int main() 
{ 
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<find_unique_num(arr, n);
    return 0; 
} 