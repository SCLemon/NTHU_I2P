#include <stdio.h>
int main(){
    int times,n,num;
    scanf("%d",&times);
    int size;
    for(int t=0;t<times;t++){
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&num);
            arr[i]=num;
        }
        size=sizeof (arr)/sizeof (arr[0]);
        for(int n=0;n<size-1;n++){
            for(int m=n+1;m<size;m++){
                int mid;
                if(arr[n]>arr[m]){
                    mid=arr[n];
                    arr[n]=arr[m];
                    arr[m]=mid;
                }
            }
        }
        for(int j=0;j<size;j++){
            if(j!=size-1){
                printf("%d ",arr[j]);
            }
            else{
                printf("%d",arr[j]);
            }
        }
        printf("\n");
    }

    return 0;
}