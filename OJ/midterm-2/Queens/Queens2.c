#include <stdio.h>
int N;
int col[14],d1[27],d2[28]; // d1 -> 左下到右上 , d2 -> 左上到右下
int getAns(int row){
    if(row==N){
        return 1;
    }
    int res=0;
    for(int i=0;i<N;i++){
        // enumerate position of column
        if(col[i]) continue; // 同直行
        if(d1[i+row]) continue; // 斜排
        if(d2[row-i+14]) continue; // 斜排
        col[i]=1;
        d1[row+i]=1;
        d2[row-i+14]=1;
        res+= getAns(row+1);
        col[i]=0;
        d1[row+i]=0;
        d2[row-i+14]=0;
    }
    return res;
}
int main(){
    scanf("%d",&N);
    printf("%d\n", getAns(0));
    return 0;
}