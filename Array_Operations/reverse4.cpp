#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; ++i)
        scanf("%d", &arr[i]);
    reverse(arr, arr+n);
    for(int i=0; i<n; ++i)
        printf("%d ", arr[i]);
}