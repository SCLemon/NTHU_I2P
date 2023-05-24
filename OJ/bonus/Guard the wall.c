#include <stdio.h>
#include <string.h>

#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)

int T, N, Q, ans, len, tmp_len, L[5005], R[5005], Wall[5005];

int main() {
    scanf("%d", &T);
    while (T--) {

        // initialize
        memset(Wall, 0, sizeof(Wall));
        ans = len = 0;
        scanf("%d %d", &N, &Q);

        // get data
        // count how many people can guard the i-th wall
        // count the maximum length of the wall guarded
        for (int i = 0; i < Q; i++) {
            scanf("%d %d", &L[i], &R[i]);
            for (int j = L[i]; j <= R[i]; j++) {
                if (!Wall[j]) len++;
                Wall[j]++;
            }
        }

        // count the answer
        // break condition is important
        // except the i-th and the j-th guards
        for (int i = 0; i < Q - 1; i++) {
            for (int j = i + 1; j < Q; j++) {

                // prevent from modifying len
                tmp_len = len;

                // Case 1: without overlap
                if (R[i] < L[j] || R[j] < L[i]) {
                    for (int idx = L[i]; idx <= R[i]; idx++) {
                        if (tmp_len <= ans) break;
                        if (!(Wall[idx] - 1)) tmp_len--;
                    }
                    for (int idx = L[j]; idx <= R[j]; idx++) {
                        if (tmp_len <= ans) break;
                        if (!(Wall[idx] - 1)) tmp_len--;
                    }
                }

                    // Case 2: with overlap
                else {
                    int l_M, l_m, r_M, r_m;
                    l_M = max(L[i], L[j]);
                    l_m = min(L[i], L[j]);
                    r_M = max(R[i], R[j]);
                    r_m = min(R[i], R[j]);
                    for (int idx = l_m; idx <= r_M; idx++) {
                        if (tmp_len <= ans) break;
                        if (idx >= l_M && idx <= r_m && !(Wall[idx] - 2)) tmp_len--;
                        if (idx < l_M && idx > r_m && !(Wall[idx] - 1)) tmp_len--;
                    }
                }

                // get the ans
                ans = ans > tmp_len ? ans : tmp_len;
            }
        }

        // output
        printf("%d\n", ans);
    }
}
// Utin