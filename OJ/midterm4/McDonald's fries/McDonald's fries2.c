#include <stdio.h>
#include <stdlib.h>
long long seq[1000001];
long long lower(long long L,long long R,long long num){
    int mid;
    while(L<R){
        mid=(L+R)/2;
        if(seq[mid]>=num) R=mid;
        else L=mid+1;
    }
    return R;
}
int main(){
    long long n,k,q;
    long long a,b;
    scanf("%lld%lld%lld",&n,&k,&q);
    for(int i=0;i<n;i++) scanf("%lld",&seq[(i+(n-k))%n]);
    while (q--){
        long long f;
        scanf("%lld",&f);
        a= lower(0,n-k,f);
        b= lower(n-k,n,f);
        if(a==n-k && b==n) printf("gan ni nya sai bau\n");
        else if(a!=n-k && b==n) printf("%lld\n",a+1);
        else if(a==n-k && b!=n) printf("%lld\n",b+1);
        else{
            if(llabs(seq[a]-f)<=llabs(seq[b]-f)) printf("%lld\n",a+1);
            else printf("%lld\n",b+1);
        }
    }

    return 0;
}

