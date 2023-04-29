#include <stdio.h>
long long int prefix[1000005];
int main(){
    int n,q,l,r,m;
    scanf("%d %d",&n,&q);
    int x;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x<0)x=0;
        prefix[i]=prefix[i-1]+x;
    }
    for(int i=0;i<q;i++){
        scanf("%d%d%d",&l,&r,&m);
        long long int answer=prefix[l+m-1]-prefix[l-1];
        printf("%lld\n",answer);
    }
    return 0;
}