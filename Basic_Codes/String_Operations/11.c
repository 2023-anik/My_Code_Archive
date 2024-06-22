//Write a function named slice, which takes a strin & returns a sliced string from index n to m
//code 2

#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m){
    char new_str[100];//for store a new strings
    int i, j=0;
    for(i=n; i<=m; i++, j++){
        new_str[j]=str[i];
    }
    new_str[j]='\0';
    puts(new_str);
}

int main(){
    char anything[100];
    fgets(anything, sizeof(anything), stdin);
    //let, n=3, m=6
    int n=3, m=6;
    slice(anything, n, m);
}