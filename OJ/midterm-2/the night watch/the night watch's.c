#include <stdio.h>
#define Max(a,b) (a>b?a:b)
#define Min(a,b) (a<b?a:b)
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        int arr[n],ans=0;
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        k=Min(k,m-1);
        for(int i=0;i<=k;i++){
            int at_least=0x3f3f3f3f;
            for(int j=0;j<=m-1-k;j++){
                at_least=Min(Max(arr[i+j],arr[i+j+(n-m)]),at_least);
            }
            ans =Max(ans,at_least);
        }
        printf("%d\n",ans);
    }
    return 0;
}