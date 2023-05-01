#include <stdio.h>
int cal(int a[]);
int n;
int main(){
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d",cal(a));
    return 0;
}
int cal(int a[]){
    int ans=0;
    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int x=a[i];
            int y=a[j];
            // 輾轉相除法-2
            while(y){
                int tmp =x%y;
                x=y;
                y=tmp;
            }
            if(x>ans){
                ans=x;
            }
        }
    }
    return ans;
}