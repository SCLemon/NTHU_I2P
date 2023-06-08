#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char str[103][1005];
char* ptrs[103];
int cmp(const void* a,const void* b){
    char *aa = *(char**)a;
    char *bb = *(char**)b;
    char c[3000],d[3000];
    strcpy(c,aa);
    strcat(c,bb);
    strcpy(d,bb);
    strcat(d,aa);
    return strcmp(d,c);
}
int main(){
    int n;
    while (scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%s",str[i]);
            ptrs[i]=str[i];
        }
        qsort(ptrs,n,sizeof (ptrs[0]),cmp);
        for(int i=0;i<n;i++) printf("%s",ptrs[i]);
        printf("\n");
    }
}