//using 1D array
#include<stdio.h>
int count_odd(int arr[], int n){
    int i, count = 0;;
    for(i=0; i<n; i++){
        if(arr[i]%2==1){
            count++;
        }
    }
    return count;
}
int main(){
    int marks[]={1, 2, 3, 4, 5};
    int n=5;
    printf("%d\n", count_odd(marks, 5));

}