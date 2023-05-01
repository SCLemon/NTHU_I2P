#include <stdio.h>
int N;
int L,M,R;
int getans(int row){
    if(row==N){
        return 1;
    }
    int res=0;
    for(int i=0;i<N;i++){
        // enumerate position of column
        if((L|M|R) & (1<<i)) continue;
        int l=L,m=M,r=R;
        L|=(1<<i);
        M|=(1<<i);
        R|=(1<<i);
        L<<=1;
        R>>=1;
        res+= getans(row+1);
        L=l,M=m,R=r;
    }
    return res;
}
int main(){
    scanf("%d",&N);
    printf("%d\n", getans(0));
    return 0;
}