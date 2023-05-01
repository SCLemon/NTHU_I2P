#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],list[n],ans[n];
    for(int i =0;i<n;i++) scanf("%d",&arr[i]);
    for(int i =0;i<n;i++) scanf("%d",&list[i]);
    int x=0;
    int mid=0;
    for(int j=0;j<n;j++){
        for(int k=mid;k<=n;k++){
            if(k!=n && arr[k]==list[j]){
                ans[x]=k+1-mid;
                mid=k+1;
                break;
            }
            else{
                ans[x]=0;
            }
        }
        x++;
    }
    for(int y=0; y<n ;y++){
        if(y==n-1) printf("%d",ans[y]);
        else printf("%d ",ans[y]);
    }
    return 0;
}