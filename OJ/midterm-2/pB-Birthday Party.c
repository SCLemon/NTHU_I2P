#include <stdio.h>

#define lcm(a, b) (a / gcd(a, b) * b)

long long gcd(long long n, long long k);

int main() {
    int T;
    long long n, r, b, y, R, B, Y, d;
    scanf("%d", &T);
    while (T--) {
        scanf("%lld %lld %lld %lld", &n, &r, &b, &y);
        R = gcd(n, r);
        B = gcd(n, b);
        Y = gcd(n, y);
        d = lcm(lcm(R, B), Y);
        printf("%lld\n", n / d);
    }
}
// 最大公因數
long long gcd(long long n, long long k) {
    while (k) { // k!=0
        long long tmp = n % k;
        n = k;
        k = tmp;
    }
    return n;
}