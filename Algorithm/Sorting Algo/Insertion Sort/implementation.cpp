#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void InsertionSort(int *arr, int size){
    for(int i=1; i<size; ++i){
        int next=arr[i];
        int j;
        for( j=i-1; j>=0 && arr[j]>next; j--)
            arr[j+1]=arr[j];
        arr[j+1]=next;
    }
}

int main(){
    int arr[]={29, 10, 14, 37, 13};
    InsertionSort(arr, 5);
    for(int i=0; i<5; ++i)
        cout<<arr[i]<<' ';
    cout<<endl;
    return 0;
}