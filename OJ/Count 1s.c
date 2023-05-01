#include <stdio.h>
long long int arr[1000001];
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=1000000;i++){
        int mid=i,total=0;
        while (mid>0){
            if(mid%10==1) total++;
            mid/=10;
        }
        arr[i]=arr[i-1]+total;
    }
    while (t--){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%lld\n",arr[b]-arr[a-1]);
    }
    return 0;
}