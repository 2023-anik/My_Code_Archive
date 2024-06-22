#include<stdio.h>
#include<string.h>

void present_or_not(char given_str[], char ch){
    int i;
    for(i=0; given_str[i]!='\0'; i++){
        if(given_str[i]==ch){
            printf("character is present\n");
            return;
        }
    }
    printf("character is not present\n");
}

int main(){
    char given_str[]="Hello World";
    char ch;
    scanf(" %c", &ch);//the space before %c to consume leading whitespace means skiping any whitespace
    present_or_not(given_str, ch);
}