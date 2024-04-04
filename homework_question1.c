// Mandy Joseph SBU ID: 115442979

#include <stdio.h>
#include <stdlib.h>

#define MAX 39
char *ToPigLatin (char word[]) {
    int i = 0, len = 0;
    char first;

    for (i = 0; word[i] != '\0'; i++) {
    }
    len = i;
    if (word[0] >= 'a' && word[0] <= 'z') {
        if (word[0] == 'a' ||word[0] == 'e'|| word[0] == 'i'|| word[0] == 'o'|| word[0] == 'u') {
            word[len] = 'w';
            word[len + 1] = 'a';
            word[len + 2] = 'y';
            word[len + 3] = '\0';

            return word;
        } else {
            first = word[0];

            for (i = 0; i < len - 1; i++) {

                word[i] = word[i + 1];
            }
            word[i] = first;
            word[i + 1] = 'a';
            word[i + 2] = 'y';

            word[i + 3] = '\0';

            return word;
        }
    }
    if (word[0] >= 'A' && word[0] <= 'Z') {
        if (word[0] == 'A' ||word[0] == 'E'|| word[0] == 'I'|| word[0] == 'O'|| word[0] == 'U') {
            word[len] = 'w';
            word[len + 1] = 'a';
            word[len + 2] = 'y';
            word[len + 3] = '\0';

            return word;
        } else {
            first = word[0] - 'A' + 'a';

            for (i = 0; i < len - 1; i++) {

                word[i] = word[i + 1];
            }
            word[i] = first;
            word[i + 1] = 'a';
            word[i + 2] = 'y';

            word[i + 3] = '\0';
            word[0] - ('a' - 'A');

            return word;
        }
    }



}


int main (){ 
    char word[39];
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("Please input a word: ");
        scanf("%s", word); getchar();

        printf("%s \n", ToPigLatin(word));
    }
}