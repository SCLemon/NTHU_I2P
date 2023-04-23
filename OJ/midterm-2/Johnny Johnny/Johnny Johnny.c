#include <stdio.h>
int cal(int sum ,int p);
int n,k;
int arr[20];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    // 由小排到大 --> 遞增函數
    for(int j=0;j<n-1;j++){
        for(int k=j;k<n;k++){
            int mid;
            if(arr[k]<arr[j]){
                mid =arr[j];
                arr[j]=arr[k];
                arr[k]=mid;
            }
        }
    }
    printf("%d\n", cal(0,0)); // 從 arr[0] 開始
    return 0;
}
int cal(int sum,int p){
    if(sum==k) return 1; // 總和為k --> 符合
    if(sum>k||p==n) return 0; // （遞增函數） 總和大於k 或 p(index)超過陣列範圍 --> 不符合
    return (cal(sum+arr[p],p+1)+cal(sum,p+1));
    //which represent the number of subsets that include the p-th element of the array
    //and the number of subsets that do not include it, respectively.
}