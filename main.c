#include <stdio.h>
#include <stdbool.h>



int main(){

    char word[] = "hangman";
    char userGuess;
    char guessedWord[] = "xxxxxxx";
    bool guessed = false;
    while(guessed != true){
        printf("Enter a guess: ");
        scanf(" %c", &userGuess);
        for (int i = 0; word[i] != '\0'; i++) {
            if (word[i] == userGuess) {
            guessedWord[i] = userGuess;
            printf("\n");
            printf(guessedWord);
            printf("\n");
            }
            if(word == guessedWord){
                guessed == true;
                printf("congrats");
            }
        }
    }


    return 0;
}