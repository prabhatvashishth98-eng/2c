#include <stdio.h>
#include <string.h>

void toLowerCase(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (char)(s[i] + ('a' - 'A'));
        }
    }
}

int main(void) {
    char s[10005];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        s[strcspn(s, "\r\n")] = '\0';
        toLowerCase(s);
        printf("%s\n", s);
    }
    return 0;
}