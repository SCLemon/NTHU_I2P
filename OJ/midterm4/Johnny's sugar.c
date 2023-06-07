#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int slot[n][n];
    int colMax[n],rowMin[n];
    for(int i=0;i<n;i++){
        colMax[i]=0;
        for(int j=0;j<n;j++){
            scanf("%d",&slot[i][j]);
            if(slot[i][j]>colMax[i]) colMax[i]=slot[i][j];
        }
        if(i!=n-1) printf("%d ",colMax[i]);
        else printf("%d\n",colMax[i]);
    }
    for(int i=0;i<n;i++){
        rowMin[i]=0x3f3f3f3f;
        for(int j=0;j<n;j++) if(slot[j][i]<rowMin[i]) rowMin[i]=slot[j][i];
        if(i!=n-1) printf("%d ",rowMin[i]);
        else printf("%d",rowMin[i]);
    }
    return 0;
}