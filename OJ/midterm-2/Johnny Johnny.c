#include <stdio.h>
#include <stdlib.h>

int cal(int,int);
int n,k;
int arr[21];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // 由小排到大
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
    printf("%d\n",cal(0,0));
    return 0;
}
int cal(int sum,int p){
    if(sum==k) return 1;
    if(sum>k||p==n) return 0;
    return (cal(sum+arr[p],p+1)+cal(sum,p+1));
}