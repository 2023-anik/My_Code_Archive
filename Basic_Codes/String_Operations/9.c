//Find the saltd form of a password entered by user if the salt is "123" & added at the end

#include<stdio.h>
#include<string.h>
int main(){
    char pass[100];
    scanf("%s", pass);
    char salt[]="123";
    char new_pass[200];
    strcpy(new_pass, pass);//for copy pass into newpass
    strcat(new_pass, salt);//for concatenates means appends
    puts(new_pass);//for print new pass
}