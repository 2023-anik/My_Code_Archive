//to convert all lowercase vowels to uppercase vowels

#include<stdio.h>
#include<string.h>

void lowercase_to_uppercase(char str[]){
    int i, j;
    char vowels[]={'a', 'e', 'i', 'o', 'u'};
    for(i=0; str[i]!='\0'; i++){
        for(j=0; j<5; j++){
            if(str[i]==vowels[j]){
                str[i]=str[i]-'a'+'A';//equation of lowercase to uppercase concert
            }
        }
    }
    str[i]='\0';
    puts(str);
}

int main(){
    char anything[100];
    fgets(anything, sizeof(anything), stdin);
    lowercase_to_uppercase(anything);
}