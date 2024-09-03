#include<stdio.h>

int main(){
    char full_name[100];
    //gets(full_name);//for input, it is dengerous and unsafe, so we don't use it
    fgets(full_name, 100, stdin);// we use for input fgets(string name, string size, file name which is stdin)
    puts(full_name);//for output. It create new line itself
    
} 