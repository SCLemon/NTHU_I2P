#include <stdio.h>
long long fpw(long long base,long long power, long long mod);
int main(){
    long long x,y,m;
    scanf("%lld%lld%lld",&x,&y,&m);
    printf("%lld\n", fpw(x,y,m));
    return 0;
}

// ( a^n ) % b
long long fpw(long long base, long long power, long long mod) {
    if(power==0) return 1%mod;
    if(power==1) return base%mod;
    long long product =fpw(base,power/2,mod);
    product=(product*product)%mod;
    if(power%2==1) product=((base%mod)*(product%mod))%mod;
    return product;
}
/*
    (a + b) mod n = [(a mod n) + (b mod n)] mod n
    ab mod n = [(a mod n)(b mod n)] mod n
*/