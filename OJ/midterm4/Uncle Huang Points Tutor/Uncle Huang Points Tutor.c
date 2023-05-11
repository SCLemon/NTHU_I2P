#include <stdio.h>
long long fastPower(long long a,long long b, long long n);
int main(){
    long long x,y,m;
    scanf("%lld%lld%lld",&x,&y,&m);
    printf("%lld\n", fastPower(x,m,y));
    return 0;
}

// ( a^n ) % b
long long fastPower(long long a, long long b, long long n) {
    if (n == 1)  return a % b;
    if (n == 0) return 1 % b;

    long product = fastPower(a, b, n / 2);
    product = (product * product) % b;
    if (n % 2 == 1) product = (product * (a%b)) % b;
    return product;
}