#include <stdio.h>
#include <string.h>
#define MOD 1000000007
typedef struct _Matrix{
    long long int m[3][3];
} Matrix;
/*
 | 1 2 1 |
 | 1 0 0 |
 | 0 1 0 |
 */
Matrix constant(){
    Matrix M;
    M.m[0][0] = 1; M.m[0][1] = 2; M.m[0][2] = 1;
    M.m[1][0] = 1; M.m[1][1] = 0; M.m[1][2] = 0;
    M.m[2][0] = 0; M.m[2][1] = 1; M.m[2][2] = 0;
    return M;
}
Matrix mul(Matrix a, Matrix b){
    Matrix ans;
    memset(ans.m,0,sizeof(ans.m));
    for(int i=0;i<3;i++) for(int j=0;j<3;j++){
            for(int k=0;k<3;k++) ans.m[i][j] += (a.m[i][k] * b.m[k][j])%MOD;
            ans.m[i][j] %= MOD;
        }
    return ans;
}
Matrix fpw(long long int x){
    /*
     fpw
     power =0 return 1;
     power =1 return base;
     product = fpw(power/2);
     power%2==1 return (base*product*product);
     return product*product;
    */
    if(x==1) return constant();
    Matrix product = fpw(x/2);
    if(x%2==1) return mul(mul(product,product),constant());
    return mul(product,product);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long int x;
        scanf("%lld", &x);
        if(x == 1) printf("%d\n", 1);
        else if(x == 2) printf("%d\n", 12);
        else if(x == 3) printf("%d\n", 13);
        else{
            Matrix ans = fpw(x-3);
            printf("%lld\n", (ans.m[0][0]*13 + ans.m[0][1]*12 + ans.m[0][2]*1)%MOD);
        }
    }
    return 0;
}