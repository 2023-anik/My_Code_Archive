#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    int i=0;
    while(i<n){
        cin>>num[i];
        i++;
    }
    //Move all negative numbers to beginning and positive to end with constan extra space
    int j=0;
    for(int i=0; i<n; i++){
        if(num[i]<0){
            if(i!=j){
                swap(num[i], num[j]);
            }j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}