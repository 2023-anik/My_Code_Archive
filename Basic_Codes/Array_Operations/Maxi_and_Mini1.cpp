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
    int max=arr[0];
    int min=arr[0];
    int j=1;
    while(j<n){
        if(max<arr[j]){
            max=arr[j];
        }
        if(min>arr[j]){
            min=arr[j];
        }j++;
    }
    cout<<"max :"<<max<<endl<<"min :"<<min<<endl;
    return 0;
}
//for  time complexity and space complexity, it is better.
//not better for readability