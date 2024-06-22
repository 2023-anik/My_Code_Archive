//printf two child's 3 subject's number using array
#include<stdio.h>
int main(){
    int marks[2][3];//---|---
    marks[0][0]=40;
    marks[0][1]=50;
    marks[0][2]=60;
    marks[1][0]=70;
    marks[1][1]=80;
    marks[1][2]=90;
    printf("Numbe of the 1st boy: %d, %d, %d\n", marks[0][0], marks[0][1], marks[0][2]);
    printf("Number of the 2nd boy: %d, %d, %d\n", marks[1][0], marks[1][1], marks[1][2]);
    
}