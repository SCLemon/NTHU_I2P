#include <stdio.h>
#include <math.h>
#define MAX 5e9
long long int solve(long long int y)
{
    for (int i = 0; i < 64; i++)
    {
        long long int two_pow = pow(2, i);
        if (two_pow == y + 1)
            return two_pow;
        if (two_pow > y)
            break;
        long long int l = 0, r = MAX, ans = -1;
        while (r > l)
        {
            long long int mid = (l + r) / 2;
            long long int k = mid * 2 + 1; // check odd
            long long int guess = (two_pow - 1) + (k - 1) / 2;
            if (guess == ((long double)y / k))
            {
                r = mid;
                ans = k;
            }
            else if (guess > ((long double)y / k))
                r = mid;
            else
                l = mid + 1;
        }
        if ((two_pow - 1) + (ans - 1) / 2 == ((long double)y / ans))
            return ans * two_pow;
    }
    return -1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int n;
        scanf("%lld",&n);
        if (n > 1)
            printf("%lld\n", solve(n));
        else
            printf("2\n");
    }
}