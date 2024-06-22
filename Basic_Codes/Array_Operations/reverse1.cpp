#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    i=n;
    while(i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//It modifies the original array.
//It uses a while loop for input and output, which might be considered simpler and more intuitive for some programmers.
//It directly reverses the array without using an additional array.
