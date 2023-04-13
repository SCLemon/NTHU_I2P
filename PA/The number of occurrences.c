#include <stdio.h>
#include <string.h>
int main(){
    // 3/5
    char sub[5];
    int t,max=0;
    scanf("%s",sub);
    scanf("%d",&t);
    int lenA= strlen(sub);

    for(int k=0;k<t;k++){
        int count=0,count1=0;
        char str[12];
        scanf("%s",str);
        int lenB = strlen(str);

        // 開始判斷
        for(int i=0;i<lenB;){
            int j=0; // 每一次判斷 sub 都從第一個字符開始

            while(str[i]==sub[j]){
                // 匹配成功
                count++; // 用於下方 count == lenA 判斷長度若等於 sub ，則表示 sub 存在於此 str
                i++; // str 下一個字符
                j++; // sub 下一個字符
                if(i==lenB){
                    // 當 i = lenB 會超過 str[i]，所以須 break
                    break;
                }
            }
            if(count==lenA){
                // 記錄數目
                count1++;
                // 重置
                count=0;
            }
            else{
                // 繼續往下一個字符開始配對
                i++;
            }
        }
        if(count1>max){
            max=count1;
        }
    }
    printf("%d",max);
    return 0;
}