//Write a program to remove blank space in a string

#include<stdio.h>
#include<string.h>

void remove_blank_space(char str[]){
    char new_str[265];
    int len = strlen(str);
    int i, j=0;
    for(i=0; i<len; i++){
        if(str[i]!=' ' && str[i]!='\n' && str[i]!='\t' && str[i]!='\r'){
            new_str[j++]=str[i];
        }
    }
    //null-terminate the new string
    new_str[j]='\0';
    //print new string
    puts(new_str);
}

int main(){
    char anything[100];
    fgets(anything, sizeof(anything), stdin);
    remove_blank_space(anything);
}