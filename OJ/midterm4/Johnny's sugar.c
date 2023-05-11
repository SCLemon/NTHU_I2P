#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int slot[n][n],rowMax[n],colMin[n];
    // input & rowMax
    for(int i=0;i<n;i++){
        int max=0;
        for(int j=0;j<n;j++){
            scanf("%d",&slot[i][j]);
            if(slot[i][j]>max) max=slot[i][j];
        }
        rowMax[i]=max;
    }
    // colMin
    for(int i=0;i<n;i++){
        int min=0x3f3f3f3f;
        for(int j=0;j<n;j++){
            if(slot[j][i]<min) min =slot[j][i];
        }
        colMin[i]=min;
    }
    // output
    for(int i=0;i<n;i++){
        if(i==n-1) printf("%d\n",rowMax[i]);
        else printf("%d ",rowMax[i]);
    }
    for(int i=0;i<n;i++){
        if(i==n-1) printf("%d",colMin[i]);
        else printf("%d ",colMin[i]);
    }
    return 0;
}