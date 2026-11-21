#include <stdio.h>
#include <string.h>

int isIsomorphic(const char s[], const char t[]) {
    int n = (int)strlen(s);
    if (n != (int)strlen(t)) return 0;

    int mapST[256];
    int mapTS[256];
    for (int i = 0; i < 256; i++) {
        mapST[i] = -1;
        mapTS[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        unsigned char cs = (unsigned char)s[i];
        unsigned char ct = (unsigned char)t[i];

        if (mapST[cs] == -1 && mapTS[ct] == -1) {
            mapST[cs] = ct;
            mapTS[ct] = cs;
        } else if (mapST[cs] != (int)ct || mapTS[ct] != (int)cs) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char s[10005], t[10005];
    if (scanf("%10004s %10004s", s, t) == 2) {
        printf("%s\n", isIsomorphic(s, t) ? "true" : "false");
    }
    return 0;
}