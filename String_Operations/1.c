#include<stdio.h>
void printName(char arr[]){
    int i;
    for(i=0; arr[i]!='\0'; i++){//condition: arr[i]!='\0'
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main(){
    char firstN[]="Anik";
    char lastN[]="Sen"; 
    printName(firstN);
    printName(lastN);
}