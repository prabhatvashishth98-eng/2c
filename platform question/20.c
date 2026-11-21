#include <stdio.h>
#include <string.h>

int isAnagram(const char s[], const char t[]) {
    if (strlen(s) != strlen(t)) return 0;
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return 0;
    }
    return 1;
}

int main(void) {
    char s[10005], t[10005];
    if (scanf("%10004s %10004s", s, t) == 2) {
        printf("%s\n", isAnagram(s, t) ? "true" : "false");
    }
    return 0;
}