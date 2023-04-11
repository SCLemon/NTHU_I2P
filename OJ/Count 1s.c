#include <stdio.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    long long int prefixs[1000005];
    prefixs[0]=0;
    for(long long int i=1;i<=1000000;i++){
        int total=0,mid=i;
        while(mid>0){
            if(mid%10 == 1){
                total++;
            }
            mid/=10;
        }
        prefixs[i] = prefixs[i-1]+total;
    }
    while (t--){
        long long int l,r;
        scanf("%lld %lld",&l,&r);
        printf("%lld\n",prefixs[r]- prefixs[l-1]);
    }
    return 0;
}