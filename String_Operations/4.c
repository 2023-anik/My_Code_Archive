#include<stdio.h>
#include<string.h>
int main(){
    char name[100];

    //for input
    fgets(name, 100, stdin);
    //for output
    puts(name);
    //strlen(name);//for counting number of string
    /*keep in mind, 'fgets' reads the newline characrer ('\n') i fit's encountered in the input,, and this niwline character will be included in tbhe string, 
    So, the length of the string will include the wenline character,. If you want to exclude it from the length dcount, you should subtract 1 from the result of 
    strlen(name)'*/
    printf("The length of the name is: %d\n", strlen(name)-1);
}