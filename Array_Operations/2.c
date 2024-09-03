#include<stdio.h>
int main(){
    int num[2][3];
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d", &num[i][j]);
        }
    }
    printf("1st boy: ");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d", num[i][j]);
            if(j<2){
                printf(" ");//for spacing each marks
            }
        }
        printf("\n");
        if(i<1){
        printf("2nd boy's: ");//For printing one times
        }
    }
}