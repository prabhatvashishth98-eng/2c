#include <stdio.h>
#include <string.h>

int firstUniqChar(const char s[]) {
    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && freq[s[i] - 'a'] == 1) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    char s[10005];
    if (scanf("%10004s", s) == 1) {
        printf("%d\n", firstUniqChar(s));
    }
    return 0;
}