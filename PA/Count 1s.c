#include <stdio.h>
// partial accepted
int main(){
    long long int t;
    scanf("%lld",&t);
    while (t--){
        long long int l,r;
        scanf("%lld %lld",&l,&r);
        long long int sum=0;
        for(long long int i=l;i<=r;i++){
            long long int mid=i;
            while(mid>0){
                if(mid%10 == 1){
                    sum++;
                }
                mid/=10;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}