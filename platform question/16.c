#include <stdio.h>
#include <string.h>

void printInputs(char ch, const char word[], const char sentence[]) {
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sentence);
}

int main(void) {
    char ch;
    char word[1005];
    char sentence[10005];

    if (scanf(" %c", &ch) != 1) return 0;
    if (scanf("%1004s", word) != 1) return 0;

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        sentence[strcspn(sentence, "\r\n")] = '\0';
    } else {
        sentence[0] = '\0';
    }

    printInputs(ch, word, sentence);
    return 0;
}