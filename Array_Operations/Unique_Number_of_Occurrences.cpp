#include <bits/stdc++.h> 
using namespace std;
const int n=1000;
int hash_arr[n];

bool unique_num_of_occurences(int arr[], int size){
    for(int i=0; i<size-1; ++i){
        if(hash_arr[i]!=0){
            if(hash_arr[i]==hash_arr[i+1])
            return false;
        }
    }
    return true;
}

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        hash_arr[arr[i]]++;
    }
    cout<<unique_num_of_occurences(hash_arr, n)<<endl;
    return 0; 
} 