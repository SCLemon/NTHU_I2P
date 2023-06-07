#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a ,const void* b){
    const int* va = (const int *)a;
    const int* vb = (const int *)b;
    return *va>*vb?1:*va<*vb?-1:0;
}
int main(){
    int t,n,p,k,ans;
    int arr[300003];
    int pre[300003]={0};
    scanf("%d",&t);
    while (t--){
        ans=0;
        scanf("%d%d%d",&n,&p,&k);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        // sort
        qsort(arr,n,sizeof (arr[0]),cmp);
        // prefix sum
        for(int i=1;i<=n;i++){
            if(i>=k) pre[i]=arr[i-1]+pre[i-k];
            else pre[i]=arr[i-1]+pre[i-1];
            if(pre[i]<=p) ans=i;
        }
        printf("%d\n",ans);
    }
    return 0;
}