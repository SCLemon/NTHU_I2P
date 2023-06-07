#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 測資 2,3,5,7,8,9 為 NO
int cmp(const void *a , const void *b){
    return strlen(*(char**)a) - strlen(*(char**)b);
}
int main(){
    int n;
    int flag=1;
    scanf("%d",&n);
    char str[n][1001];
    char *ptrs[n];
    for(int i=0;i<n;i++) {
        scanf("%s",str[i]);
        ptrs[i]=str[i];
    }
    qsort(ptrs,n,sizeof (char*),cmp);
    for(int i=0;i<n-1;i++){
        // char * strstr(char * str1, const char * str2); --> 找尋前者是否為後者之子字串
        if(strstr(ptrs[i+1],ptrs[i])==NULL){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("YES\n");
        for(int i=0;i<n;i++){
            printf("%s\n",ptrs[i]);
        }
    }
    else printf("NO\n");

    return 0;
}