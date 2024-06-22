#include<iostream>
using namespace std;

void reverseArrExtraArr(int arr[], int size){
    int reversedArr[size];
    int i=0;
    while(i<size){
        reversedArr[i]=arr[size-i-1];
        i++;
    }
    int j=0;
    while(j<size){
        cout<<reversedArr[j]<<" ";
        j++;
    }
}

int main(){
    int n;
    cin>>n;
    int originalArr[n];
    int i=0;
    while(i<n){
        cin>>originalArr[i];
        i++;
    }
    reverseArrExtraArr(originalArr, n);
}

// Time Complexity: O(n)
// Copying elements to a new array is a linear operation.
// Auxiliary Space Complexity: O(n)
// Additional space is used to store the new array
//It does not modify the original array.
//may improve code organization and reusability.