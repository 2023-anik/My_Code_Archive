#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// void BubbleSort(int *arr, int size){
//     for(int i=size-1; i>=1; --i){
//         for(int j=1; j<=i; j++)
//             if(arr[j-1]>arr[j])
//                 swap(arr[j-1], arr[j]);
//     }
// }

//optimized code
void BubbleSort(int *arr, int size){
    for(int i=size-1; i>=1; --i){
        bool is_sorted=true;
        for(int j=1; j<=i; j++)
            if(arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
                is_sorted=false;
            }  
        if(is_sorted) return;
    }
}

int main(){
    int arr[]={14, 10, 20, 30, 53};
    BubbleSort(arr, 5);
    for(int i=0; i<5; ++i)
        cout<<arr[i]<<' ';
    cout<<endl;
    return 0;
}