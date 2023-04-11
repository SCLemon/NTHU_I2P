#include <stdio.h>
// It is the smallest positive integer that is a multiple of two or more integers.
// a * b = gcd(a, b) * lcm(a, b)
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
        // the smallest positive integer of R,B,Y
        d = lcm(lcm(R, B), Y);
        printf("%lld\n", n / d);
    }
}
// 最大公因數
/*
 We do this because the problem requires that no two adjacent balls have the same color.
 So, we want to find the largest factor that divides n and each color,
 because that will give us the maximum number of balls that can be colored with that color
 without violating the condition.
 */
long long gcd(long long n, long long k) {
    while (k) { // k!=0
        long long tmp = n % k;
        n = k;
        k = tmp;
    }
    return n;
}