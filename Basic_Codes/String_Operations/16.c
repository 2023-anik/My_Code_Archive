//to print the highest frequency character in a string

#include<stdio.h>
#include<string.h>

void highest_frequency(char str[]){
    int max_frequency = 0;
    char most_frequency_char;
    //initialize an array to store the frequency of each character
    int ferquency[256]={0};
    //Calcutale the frequency of each character
    int i;
    for(i=0; i<strlen(str); i++){
        char current_char = str[i];
        if(current_char != ' '){
            ferquency[(int)current_char]++;
        }
    }
    //find the character with the highest frequency
    for(i=0; i<265; i++){
        if(ferquency[i]>max_frequency){
            max_frequency = ferquency[i];
            most_frequency_char = (char)i;
        }
    }
    printf("Highest Frequency of a character is %c\nFrequency number is %d\n", most_frequency_char, max_frequency);
}

int main(){
    char anything[100];
    fgets(anything, sizeof(anything), stdin);
    highest_frequency(anything);
}