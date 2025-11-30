//Q94 (Strings)
Find the longest word in a sentence.//
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char sentence[MAX];
    char longestWord[MAX] = "";
    char currentWord[MAX];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *token = strtok(sentence, " \n");
    while (token != NULL) {
        int length = strlen(token);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " \n");
    }

    printf("The longest word is: %s\n", longestWord);
    printf("Length of the longest word: %d\n", maxLength);

    return 0;
}
