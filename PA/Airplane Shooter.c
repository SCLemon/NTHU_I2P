#include <stdio.h>
// 4/6 TLE
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1][3];
    for(int i=1;i<=n;i++){
        scanf("%d%d",&a[i][0],&a[i][1]);
        a[i][2]=i;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            if(a[j][0]<a[i][0]){
                int temp,temp2,temp3;
                temp=a[j][0];
                a[j][0]=a[i][0];
                a[i][0]=temp;
                temp2=a[j][1];
                a[j][1]=a[i][1];
                a[i][1]=temp2;
                temp3=a[j][2];
                a[j][2]=a[i][2];
                a[i][2]=temp3;

            }
            else if(a[j][0]==a[i][0] && a[j][1]<a[i][1]){
                int temp,temp2,temp3;
                temp=a[j][0];
                a[j][0]=a[i][0];
                a[i][0]=temp;
                temp2=a[j][1];
                a[j][1]=a[i][1];
                a[i][1]=temp2;
                temp3=a[j][2];
                a[j][2]=a[i][2];
                a[i][2]=temp3;
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",a[i][2]);
    }
    return 0;
}