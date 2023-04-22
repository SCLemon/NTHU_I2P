#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(char str1[],char str2[]);
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char str1[1001],str2[1001];
        scanf("%s",str1);
        scanf("%s",str2);
        if(check(str1,str2)==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
int check(char str1[],char str2[]){
    // equal 返回 0
    if(strcmp(str1,str2)==0){ // 直接相等
        return 1;
    }
    else{
        if(strlen(str1)%2){ // odd -->直接返回不相等
            return 0;
        }
        else{
            int sublen = strlen(str1)/2;
            char *sub[4]; // malloc 使用
            int i;
            // 分配空間
            for(i=0;i<4;i++){
                sub[i]=(char*) malloc(sublen*sizeof(char));
            }
            // 分段
            strncpy(sub[0],str1,sublen); // 第一字串的前半
            strncpy(sub[1],str1+sublen,sublen); // 第一字串的後半
            strncpy(sub[2],str2,sublen); // 第二字串的前半
            strncpy(sub[3],str2+sublen,sublen); // 第二字串的後半
            // 開始比較 --> 符合則需繼續往下拆解（遞迴）
            if(check(sub[0],sub[2]) && check(sub[1],sub[3]) || check(sub[0],sub[3]) && check(sub[1],sub[2])){
                return 1;
            }
        }
    }
}