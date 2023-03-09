#include <stdio.h>
#include <string.h>
int main(){
    // 尚未解決
    int times;
    scanf("%d",&times);
    for(int t=0;t<times;t++){
        int x;
        char head[501];
        char back[501];
        char str[501];
        scanf("%d",&x);
        scanf("%s",str);
        for(int j=0;j<x;j++){
            char repeat = str[j];
            strncpy(head,str,j+1);
            strncpy(back,str+j+1, strlen(str)-j);
            for(int k=0;k<(repeat-'0');k++){
                strcat(head,back);
            }
            strcpy(str,head);
            for(int l=0 ; l< strlen(head);l++){
                head[l]='\0';
            }
            int len= strlen(str);
            int ans =len%(1000000000+7);
            printf("%d",ans);
        }
    }
    return 0;
}