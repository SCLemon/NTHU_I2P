#include <stdio.h>
#include <stdlib.h>
int arr[100001];
int cmp(const void* a, const void *b){
    return *(int*)a-*(int*)b;
}
int lower(int *arr,int L,int R,int x){
    int mid;
    while (L<R){
        mid =(L+R)/2;
        if(arr[mid]>=x) R=mid;
        else L=mid+1;
    }
    return R;
}
int upper(int *arr,int L,int R,int x){
    int mid;
    while (L<R){
        mid =(L+R)/2;
        if(arr[mid]>x) R=mid;
        else L=mid+1;
    }
    return R;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    qsort(arr,n,sizeof (arr[0]),cmp);
    int q;
    scanf("%d",&q);
    while (q--){
        int x;
        scanf("%d",&x);
        int L = lower(arr,0,n,x);
        int H = upper(arr,0,n,x);
        printf("%d\n",H-L);
    }
    return 0;
}