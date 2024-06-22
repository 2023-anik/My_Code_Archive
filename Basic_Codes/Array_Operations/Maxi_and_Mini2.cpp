#include<iostream>
#include<algorithm>
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
    //Using sort function
    sort(arr, arr+n);
    cout<<"Max: "<<arr[n-1]<<endl<<"Min: "<<arr[0]<<endl;
    return 0;
}
//readability is more important, it is the preferable choice.
//not preferable for time and space complexity