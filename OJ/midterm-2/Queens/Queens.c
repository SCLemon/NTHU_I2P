#include <stdio.h>
int n;
int ans = 0;
// 列、對角線、反向對角線
int col[50],cnt[50],cnt2[50];

//If there is no queen in the same column, diagonal, and reverse diagonal the function returns 1
//otherwise, it returns 0.
int check(int a,int b)
{
    // col[b] == 0 checks if there is no queen in the same column as position
    // cnt[a-b+15] ==0 from top-left to bottom right
    // cnt2[a+b] == 0 from top-right to bottom-left
    if(col[b] == 0 && cnt[a-b+15] ==0 && cnt2[a+b] == 0)
        return 1;
    else
        return 0;
}
void queen(int row_now)
{
    if(row_now==n)
        ans ++;
    else
    {
        for(int y=0;y<n;y++)
        {
            if(check(row_now,y)==1)
            {
                // 如果可用，則在col、cnt、cnt2數組中標記該位置已被佔用
                col[y] = 1;
                cnt[row_now-y+15] = 1;
                cnt2[row_now + y] = 1;
                // 遞迴調用下一個皇后放置在下一行
                queen(row_now+1);
                // 如果無法放置下一個皇后，則通過重置 col、cnt 和 cnt2 數組中的值將當前皇后從棋盤中移除。
                col[y] = 0;
                cnt[row_now-y+15] = 0;
                cnt2[row_now + y] = 0;
            }
        }
    }
}
int main()
{
    scanf("%d", &n);
    queen(0);
    printf("%d\n", ans);
}