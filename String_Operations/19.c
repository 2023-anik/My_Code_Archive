//Write a programe to replace lowercase lerters with uppercase letters in a sentence

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void lowercase_to_uppercase(char str[]){
    int i;
    char new_str[strlen(str)];
    for(i=0; str[i]!='\0'; i++){
        new_str[i]=toupper((unsigned char)str[i]);
    }
    new_str[i]='\0';
    puts(new_str);
}

int main(){
    char anything[100];
    fgets(anything, sizeof(anything), stdin);
    //scanf("%s", anything);
    lowercase_to_uppercase(anything);
}