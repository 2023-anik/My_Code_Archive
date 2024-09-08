#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void insertionSort(int *arr, int n){
    for(int i=1; i<n; ++i){
        int key=arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void bubbleSort(int *arr, int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main(){
    int arr[]={29, 10, 14, 37, 13};
    insertionSort(arr, 5);
    for(int i=0; i<5; i++)
        // cout<<arr[i]<<' ';
        printf("%d ", arr[i]);


    cout<<endl;


    int arr1[]={50, 60, 40, 30, 20, 10};
    bubbleSort(arr1, 6);
    for(int i=0; i<6; i++)
        // cout<<arr1[i]<<' ';
        printf("%d ", arr1[i]);
    cout<<endl;
    return 0;
}