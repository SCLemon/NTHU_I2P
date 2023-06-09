#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void*a , const void*b){
    return strlen(*(char**)a)-strlen(*(char**)b);
}
int main(){
    int n;
    char str[1001][1001];
    char* ptrs[1001];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
        ptrs[i]=str[i];
    }
    qsort(ptrs,n,sizeof (char*),cmp);
    int flag=1;
    for(int i=0;i<n-1;i++){
        if(strstr(ptrs[i+1],ptrs[i])==NULL){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("YES\n");
        for(int i=0;i<n;i++) printf("%s\n",ptrs[i]);
    }
    else printf("NO");
    return 0;
}