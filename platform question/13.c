#include <stdio.h>
#include <string.h>

int lengthOfLastWord(const char s[]) {
    int i = (int)strlen(s) - 1;
    int length = 0;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
}

int main(void) {
    char s[10005];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        s[strcspn(s, "\r\n")] = '\0';
        printf("%d\n", lengthOfLastWord(s));
    }
    return 0;
}