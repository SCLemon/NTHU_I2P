#include <stdio.h>
long long int ans[500000];
long long int pre[500000];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int A,B,C,D;
        scanf("%d%d%d%d",&A,&B,&C,&D);
        for(int i=0;i<=100000;i++){
            pre[i] = 0;
            ans[i] = 0;
        }
        for(int i=A;i<=B;i++){
            int L = i+B;
            int R = i+C+1;
            pre[L] += 1;
            pre[R] -= 1;
        }
        for(int i=A+B;i<B+C+1;i++)
            pre[i+1] += pre[i];
        for(int i=C+1;i<B+C+1;i++)
            ans[C] += pre[i];
        for(int i=C+1;i<=D;i++)
            ans[i] = ans[i-1] - pre[i];
        long long int ans1 = 0;
        for(int i=C;i<=D;i++)
            ans1 += ans[i];
        printf("%lld\n",ans1);
    }
}