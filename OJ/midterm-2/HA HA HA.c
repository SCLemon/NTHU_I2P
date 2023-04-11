#include <stdio.h>
int cal(int a[],int size);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // because size of a is different...
    int ans =cal(a,sizeof (a));
    printf("%d",ans);
    return 0;
}
int cal(int a[],int size){
    size/=sizeof (a[0]);
    int ans=0;
    for(int i=0; i<size-1;i++){
        for(int j=i+1;j<size;j++){
            int x=a[i];
            int y=a[j];
            // 輾轉相除法
            while(x>0 && y>0){
                if(x>y){
                    x%=y;
                }
                else{
                    y%=x;
                }
            }
            if(x==0 && y>ans){
                ans=y;
            }
            else if(y==0 && x>ans){
                ans=x;
            }
        }
    }
    return ans;
}