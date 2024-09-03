//Write a programe to replace lowercase lerters with uppercase letters

#include<stdio.h>
#include<string.h>

void lowercase_to_uppercase(char str[]){
    char new_str[strlen(str)];
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){//convert lowecase to uppercase
            new_str[i]=str[i]-'a'+'A';
        }
        else{
            new_str[i]=str[i];//keep other character unchanged
        }
    }
    new_str[i]='\0';
    puts(new_str);
    
}

int main(){
    char anything[100];
    //fgets(anything, sizeof(anything), stdin);
    scanf("%s", anything);
    lowercase_to_uppercase(anything);
}