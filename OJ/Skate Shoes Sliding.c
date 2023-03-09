#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[100001];
    scanf("%s",str);
    printf("%d", strlen(str)+1);
    return 0;
}