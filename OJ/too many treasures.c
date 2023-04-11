#include <stdio.h>
#include <limits.h>
int main(){
    // max_index 必須設為 INT_MAX
    int n, q,max_index=INT_MAX;
    long long arr[1000001];
        scanf("%d %d", &n, &q);
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &arr[i]);
            // 紀錄第一個為負數的 index 為 max_index
            if(arr[i]<0 && max_index==INT_MAX) {
                max_index=i;
            }
            arr[i] += arr[i-1];
        }
        while (q--) {
            int l, r, m, amount = 0;
            scanf("%d %d %d", &l, &r, &m);

            // 起始不為負數，若為負數則不搜集 --> 直接輸出0
            if(max_index>l){
                // 判斷搜集數目是否會超過負數位
                amount= m < max_index-l ? m : max_index-l;
            }
            // arr[l+amount-1] 表示只收集到負數前一位，減去開始搜集的位置前一位。
            printf("%lld\n", arr[l+amount-1] - arr[l-1]);
        }
    return 0;
}