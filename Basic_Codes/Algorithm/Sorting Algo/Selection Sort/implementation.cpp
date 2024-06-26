/*
Idea:
Given an array of n items
1. Find the largest item x, in the range of [0...n-1]
2. Swap x with the (n-1)-th item
3. Reduce n by 1 and go to Step 1

NB: it is possible  to do usign find the smallest item
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

//Consider in asccending order
void selection_sort(int *arr, int size){
    for(int i=size-1; i>=1; --i){
        int maxIdx=i;
        for(int j=0; j<i; ++j)
            if(arr[maxIdx]<arr[j])
                maxIdx=j;
        swap(arr[maxIdx], arr[i]);
    }
}


int main(){
    int arr[]={37, 10, 10, 29, 10, 8};
    selection_sort(arr, 6);
    for(int i=0; i<6; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
    return 0;
}