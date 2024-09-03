#include<stdio.h>
#include<string.h>
int main(){
    char firsName[100]="Anik";//str1 length >str1 lengyh + str2 length
    char secName[]="Sen";
    //For concatenates means duitake eksathe jora laganor jonne
    strcat(firsName, secName);
    puts(firsName);
}