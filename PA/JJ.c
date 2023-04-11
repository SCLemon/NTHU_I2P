#include <stdio.h>
int cal(int arr[],int len,int k);
int main(){
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long int arr[n];
    int i=0;
    for(i;i<n;i++) scanf("%d",&arr[i]);
    long long int sum = cal(arr,n,k);
    printf("%lld\n",sum);
    return 0;
}
int cal(int arr[],int len,int k){
    int temp[20000000];
    long long int sum = 0, count = 0;
    temp[10000000] = 1;
    for(int i=0; i<len; i++)
    {
        sum += arr[i];
        count += temp[sum-k+10000000];
        temp[sum+10000000]++;
    }
    return count;
}