#include<stdio.h>
#include<stdlib.h>
int n, k, q ;
long long number, arr[1000005];

long long lbd(long long *arr, int L, int R, long long number){
    int mid;
    while(L<R){
        mid = (L+R)/2;
        if(arr[mid] >= number) R = mid;
        else L = mid +1;
    }
    return R;
}
int main(){

    scanf("%d%d%d", &n, &k, &q);
    for(int i=0; i<n; i++) scanf("%lld", &arr[(i+(n-k))%n]);
    for(int i=0; i<q; i++){
        scanf("%lld", &number);
        int A = lbd(arr, 0, n-k, number);
        int B = lbd(arr, n-k, n, number);
        if(A == n-k) printf("gan ni nya sai bau\n");
        else if (B == n) printf("%d\n", A+1);
        else {
            if( arr[B] - number < arr[A] - number) printf("%d\n",B+1);
            else printf("%d\n", A+1);
        }
    }
}
// by Ian