#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void* b){
    return *(int*)a-*(int*)b;
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n,p,k;
        int arr[300001];
        long long total[300001]={0};
        scanf("%d%d%d",&n,&p,&k);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        qsort(arr,n,sizeof (arr[0]),cmp);
        for(int i=1;i<=n;i++){
            if(i<k) total[i]=arr[i-1]+total[i-1];
            else total[i]=arr[i-1]+total[i-k];
        }
        int ans=0;
        for(int i=1;i<=n;i++) if(total[i]<=p) ans=i;
        printf("%d\n",ans);
    }
}