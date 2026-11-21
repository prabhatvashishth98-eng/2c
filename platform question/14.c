#include <stdio.h>
#include <string.h>

void reverseString(char s[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    char s[10005];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        s[strcspn(s, "\r\n")] = '\0';
        reverseString(s, (int)strlen(s));
        printf("%s\n", s);
    }
    return 0;
}