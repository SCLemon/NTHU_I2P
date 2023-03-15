#include <stdio.h>

int req[100001];
int out[200001];
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    // 存取命令
    for(int i = 0; i < m; i++){
        scanf("%d", &req[i]);
    }
    for(int i = m-1; i >= 0; i--){
        // 若 req[i]=5 則 out[5]=1 (設為 true 表示已輸出)
        if(!out[req[i]]){
            printf("%d\n", req[i]);
            out[req[i]] = 1;
        }
    }
    // 原始順序
    for(int i = 1; i <= n; i++){
        // 如未被輸出，則輸出 i。
        if(!out[i]){
            printf("%d\n", i);
        }
    }
    return 0;
}