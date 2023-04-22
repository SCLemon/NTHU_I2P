#include <stdio.h>

long long gcd(long long n, long long k);
long long lcm(long long a,long long b);
int main() {
    int t;
    long long n, r, b, y, R, B, Y, d;
    scanf("%d", &t);
    while (t--) {
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
long long gcd(long long a, long long b) {
    return b==0?a:gcd(b,a%b);
}
// It is the smallest positive integer that is a multiple of two or more integers.
long long lcm(long long a,long long b){
    // a * b = gcd(a, b) * lcm(a, b) -> but we should first / , then *b
    return (a / gcd(a, b) * b);
}