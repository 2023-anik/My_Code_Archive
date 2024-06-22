#include<stdio.h>
void fibonacci(int fibo[], int n){
    int i;
    fibo[0]=0;
    fibo[1]=1;
    printf("%d %d ", fibo[0], fibo[1]);
    for(i=2; i<n; i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
        printf("%d", fibo[i]);
        if(i<n-1){
            printf(" ");
        }
    }
    printf("\n");
}
//function of the sum of the fibonacci series
int sum_fibo(int fibo[], int n){
    int i, sum=0;
    fibo[0]=0;
    fibo[1]=1;
    for(i=2; i<n+2; i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(i=0; i<n; i++){
        sum += fibo[i];
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    int fibo[n];
    fibonacci(fibo, n);
    int fibo_s[n];
    printf("%d\n", sum_fibo(fibo_s, n));
    return 0;
}