#include<iostream>
#include<algorithm>//for reverse
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
    //reverse Inbuilt Methods
    reverse(arr, arr+n);
    int j=0;
    while(j<n){
        cout<<arr[j]<<" ";
        j++;
    }return 0;
}
//Space Complexity: It doesn't use any additional space apart from the input array, so the space complexity is O(1).
