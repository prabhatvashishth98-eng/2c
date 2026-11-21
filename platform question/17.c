#include <stdio.h>
#include <string.h>

char normalizeAlnum(char ch) {
    if (ch >= 'A' && ch <= 'Z') return (char)(ch + ('a' - 'A'));
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) return ch;
    return 0;
}

int isPalindrome(const char s[]) {
    int left = 0, right = (int)strlen(s) - 1;
    while (left < right) {
        char a = normalizeAlnum(s[left]);
        if (!a) {
            left++;
            continue;
        }
        char b = normalizeAlnum(s[right]);
        if (!b) {
            right--;
            continue;
        }
        if (a != b) return 0;
        left++;
        right--;
    }
    return 1;
}

int main(void) {
    char s[10005];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        s[strcspn(s, "\r\n")] = '\0';
        printf("%s\n", isPalindrome(s) ? "true" : "false");
    }
    return 0;
}