#include <stdio.h>
long long int arr[1000005];
int main(){
    int n,q,l,r,m;
    scanf("%d%d",&n,&q);
    int x;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x<0) x=0;
        arr[i]=arr[i-1]+x;
    }
    for(int j=0;j<q;j++){
        scanf("%d%d%d",&l,&r,&m);
        printf("%lld\n",(arr[l+m-1]-arr[l-1]));
    }
    return 0;
}