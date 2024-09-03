//Write a function named slice, which takes a strin & returns a sliced string from index n to m
//code 1
#include<stdio.h>
#include<string.h>

void slice(char arr[], int n, int m){
    int i;
    for(i=n; i<=m; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
int main(){
    char AnyName[100];
    //scanf("%s", AnyName);
    fgets(AnyName, sizeof(AnyName), stdin);
    int indexn, indexm;
    scanf("%d %d", &indexn, &indexm);
    slice(AnyName, indexn, indexm);
}