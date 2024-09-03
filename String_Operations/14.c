//write a program to convert all lowercase vowels to uppercase in a string.

#include<stdio.h>
#include<string.h>

void lowe_to_upper(char str[]){
    int i, j;
    char vowels[]={'a', 'e', 'i', 'o', 'u'};
    for(i=0; str[i]!='\0'; i++){
        for(j=0; j<5; j++){
            if(str[i]==vowels[j]){
                str[i]=str[i]-'a'+'A';
             }
        }
    }
    str[i]='\0';
    puts(str);
}

int main(){
    char anything[100];
    fgets(anything, sizeof(anything), stdin);
    lowe_to_upper(anything);
}