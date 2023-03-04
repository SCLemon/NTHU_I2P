#include <stdio.h>
#include <string.h>
int main(){
    char str[2001];
    int len;
    int left=0;
    int right=0;
    int total=0;
    while(scanf("%s",str)!=EOF){
        total=0; // 重置 ( 計算新一行的回文數 )
        len= strlen(str); // 總長
        for(int i=0;i<len;i++){
            while(str[i+left]==str[i+1+right] && (i+left>=0 && i+1+right<len)){ // 偶數 aa,baab
                left--; // 向左開一格
                right++; // 向右開一格
                total++;
            }
            left=0; // 重置
            right=0; // 重置
            while(str[i+left]==str[i+2+right] && (i+left>=0 && i+2+right<len)){ // 奇數 aba , babab
                left--;
                right++;
                total++;
            }
            left=0; // 重置
            right=0; // 重置
        }
        printf("%d\n",total);
    }

    return 0;
}