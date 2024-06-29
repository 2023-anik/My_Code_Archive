#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool unique(int *arr, int size){
    for(int i=size-1; i>=0; --i)
        for(int j=0; j<i; ++j)
            if(arr[i]==arr[j])
                return false;
    return true;
}

int main(){
    int arr[]={37, 10, 14, 29, 13};
    cout<<((unique(arr, 5))?"YES":"NO")<<endl;
    int arr1[]={37, 10, 10, 29, 13};
    cout<<((unique(arr1, 5))?"YES":"NO")<<endl;
    return 0;
}