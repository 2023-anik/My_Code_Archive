#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool unique_Using_Selection_Sort(int *arr, int size){
    for(int i=0; i<size-1; ++i){
        int minIdx=i;
        for(int j=size-1; j>=0; --j){
            if(arr[j]==arr[minIdx])
                return false;
            if(arr[minIdx]>arr[j])
                minIdx=j;
        }
        swap(arr[minIdx], arr[i]);
    }return true;
}

int main(){
    int arr[]={37, 10, 14, 29, 13};
    cout<<((unique_Using_Selection_Sort(arr, 5))?"YES":"NO")<<endl;
    int arr1[]={37, 10, 10, 29, 13};
    cout<<((unique_Using_Selection_Sort(arr1, 5))?"YES":"NO")<<endl;
    return 0;
}