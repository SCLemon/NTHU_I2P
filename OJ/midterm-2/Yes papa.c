#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(char* strA, char* strB) {
    if (!strcmp(strA, strB)) { // 直接相等
        return 1;
    } else {
        int len = strlen(strA);
        if (len % 2 == 1) {  // odd -> 直接輸出不相等
            return 0;
        } else { // even
            int sublength = len/2;
            char *sub[4];
            int i;

            for (i = 0; i < 4; i++)
                // char *s = (char *)malloc(n);
                sub[i] = (char*)malloc(sublength*sizeof(char)); // 重新賦予空間大小

            // char *strncpy(char *dest, const char *src, size_t n)
            strncpy(sub[0], strA, sublength); // 前半
            strncpy(sub[1], strA+sublength, sublength); // 後半
            strncpy(sub[2], strB, sublength); // 前半
            strncpy(sub[3], strB+sublength, sublength); // 後半
            if ((check(sub[0], sub[2]) && check(sub[1], sub[3])) || ((check(sub[0], sub[3]) && check(sub[1], sub[2])))) {
                return 1;
            }
        }
    }

    return 0;
}

int main(void) {
    char stringA[1001], stringB[1001];

    scanf("%s", stringA);
    scanf("%s", stringB);
    if (check(stringA, stringB) == 1) {
        printf("%s\n", "YES");
    } else {
        printf("%s\n", "NO");
    }

    return 0;
}