#include <stdio.h>
#include <stdlib.h>
int n;
int arr[100001];
int cmp(const void *a , const void *b){
    int *aa = (int*)a;
    int *bb = (int*)b;
    return (*aa)-(*bb);
}
int lower_bound(int arr[], int N, int X)
{
    int mid;
    int low = 0;
    int high = N;

    while (low < high) {
        mid = low + (high - low) / 2;
        if (X <= arr[mid]) high = mid;
        else low = mid + 1;

    }
    if(low < N && arr[low] < X) low++;
    return low;
}
int upper_bound(int arr[], int N, int X) {
    int mid;
    int low = 0;
    int high = N;
    while (low < high) {
        mid = low + (high - low) / 2;
        if (X >= arr[mid]) low = mid + 1;
        else high = mid;
    }
    if (low < N && arr[low] <= X) low++;
    return low;
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(arr[0]),cmp);
    int q;
    scanf("%d",&q);
    while (q--){
        int x;
        scanf("%d",&x);
        int L = lower_bound(arr,n,x);
        int H = upper_bound(arr,n,x);
        printf("%d\n",H-L);
    }
}

