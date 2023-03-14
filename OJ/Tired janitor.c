#include <stdio.h>
int main(){
    long long r=0,q=0;
    scanf("%lld %lld",&r,&q);
    long long num[r];
    num[0]=0;
    for(int i=1;i<=r;i++){
        long long int x;
        scanf("%lld(/`A`)/ ~I__I ",&x);
        num[i]=num[i-1]+x;
    }
    for(int j=0;j<q;j++){
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",num[b]-num[a-1]);
    }
    return 0;
}