#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int mid;
                if(arr[j]>arr[k]){
                    mid=arr[j];
                    arr[j]=arr[k];
                    arr[k]=mid;
                }
            }
        }
        for(int l=0;l<n;l++){
            if(l==n-1){
                printf("%d",arr[l]);
            }
            else{
                printf("%d ",arr[l]);
            }
        }
        printf("\n");
    }
    return 0;
}