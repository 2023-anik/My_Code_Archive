#include<stdio.h>
#include<string.h>

int print_the_vowel_number(char str[]){
    int i, j, count=0;
    char vowel[]={'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    for(i=0; str[i]!='\0'; i++){
        for(j=0; j<10; j++){
            if(str[i]==vowel[j]){
                count++;
                break;//Exit the inner loop once a vowel is found
            }
        }
    }
    return count;
}

int main(){
    char anything[]="AmarNamAnik";//here the number of the vowel are 5
    printf("%d\n", print_the_vowel_number(anything));
    return 0;
}