#include <bits/stdc++.h> 
using namespace std;

void swap_alternate(int arr[], int size){
    for(int i=0; i<size-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
    cout<<"Swap_Alternate_Array\n";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<' ';
    cout<<"\n";
}

int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    swap_alternate(arr, n);
    return 0; 
}
//arr[5]={1, 2, 3, 4, 5, 6}
//swap alternate
//arr[5]={2, 1, 4, 3, 6, 5}