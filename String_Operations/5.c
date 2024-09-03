#include<stdio.h>
#include<string.h>
int main(){
    char new_str[]="Anik";
    char old_str[]="Sen";
    //for copies of old string to nwe string
    strcpy(new_str, old_str);
    puts(new_str);
    return 0;
}