//Make a program that inputs user's name & prints its length.
#include<stdio.h>
int print_length(char arr[]){
    int i;
    int count=0;
    //for count its length
    //next example we use a library function for counting the number of the strings
    for(i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count-1;
}
int main(){
    char first_name[100];
    fgets(first_name, 100, stdin);
    puts(first_name);
    printf("Its length is: %d\n", print_length(first_name));

}