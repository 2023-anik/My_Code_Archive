#include<stdio.h>
int main(){
    int n1, m1;//n1 for row and m1 for colomun
    printf("Enter the n*m matrix1: ");
    scanf("%d %d", &n1, &m1);
    int matrix1[n1][m1];
    int i, j;
    for(i=0; i<n1; i++){
        for(j=0; j<m1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Matrix1\n");
    for(i=0; i<n1; i++){
        for(j=0; j<m1; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
}