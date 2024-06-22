//Create a 2D arrayt, stroing the tables of 2 & 3
#include<stdio.h>
void store_table(int arr[][10], int n, int m, int number){
    //n = row
    //m = coloumn
    //number = which number's table we want
    int i, j;
    for(i=0; i<m; i++){
        arr[n][i]= number*(i+1);
    }
}
int main(){
    int table[2][10];
    store_table(table, 0, 10, 2); 
    store_table(table, 1, 10, 3);
    int i;
    for(i=0; i<10; i++){
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    for(i=0; i<10; i++){
        printf("%d\t", table[1][i]);
    }
}