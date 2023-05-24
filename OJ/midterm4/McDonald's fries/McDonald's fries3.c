#include<stdio.h>
#include<stdlib.h>
long long a[(int)1e6+5]={0};
int lower(int L, int R, long long x){
    int M;
    while(L<R){
        M=(L+R)/2;
        if(a[M]>=x) R=M;
        else L=M+1;
    }
    return L;
}
int main(void){
    int n,q,k;
    long long f;
    scanf("%d%d%d",&n,&k,&q);
    for(int i=0;i<n;i++){
        if(i<k) scanf("%lld",&a[n-k+i]);
        else scanf("%lld",&a[i-k]);
    }
    while(q--){
        scanf("%lld",&f);
        int x=lower(0,n-k,f);
        int y=lower(n-k,n,f);
        if(x==(n-k)&&y==n) printf("gan ni nya sai bau\n");
        else if(a[x]==a[y]||llabs(a[x]-f)<llabs(a[y]-f)) printf("%d\n",x+1);
        else printf("%d\n",y+1);
    }
    return 0;
}
// 用C拿C