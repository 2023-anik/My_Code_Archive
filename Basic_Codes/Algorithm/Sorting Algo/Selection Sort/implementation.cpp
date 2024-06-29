/*
Idea:
Given an array of n items
1. Find the largest item x, in the range of [0...n-1]
2. Swap x with the (n-1)-th item
3. Reduce n by 1 and go to Step 1
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

//Consider in asccending order
// void selection_sort(int *arr, int size){
//     for(int i=size-1; i>=0; --i){
//         for(int j=0; j<i; j++)
//             if(arr[i]<arr[j])
//                 swap(arr[i], arr[j]);
//     }
// }
//OR,

void selection_sort(int *arr, int size){
    for(int i=0; i<size; i++)
        for(int j=i+1; j<size; j++)
            if(arr[i]>arr[j])
                swap(arr[i], arr[j]);
}


int main(){
    int arr[]={37, 10, 14, 29, 13};
    selection_sort(arr, 5);
    for(int i=0; i<5; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
    return 0;
}