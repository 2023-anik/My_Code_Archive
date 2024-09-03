//Take a string input from the user using %c

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    int i=0;
    while (ch!='\n'){
        scanf("%c", &ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';//for understand our compiler that it is a string
    puts(str);
    
}