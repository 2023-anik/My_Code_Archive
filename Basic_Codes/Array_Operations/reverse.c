//Write a function to reverse an array
#include<stdio.h>
void reverse(int arr[], int n){
    int i;
    for(i=0; i<n/2; i++){
        int first_value = arr[i];
        int second_value = arr[n-i-1];
        arr[i] = second_value;
        arr[n-i-1] = first_value;
    }
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
        if(i<n-1){
            printf(" ");
        }
    }
    printf("\n");
}
int main(){
    int num[]={1, 2, 3, 4, 5, 6};
    int n = 6;
    reverse(num, n);
}