#include <stdio.h>
int main(){
    int arr[100001],n,k,start=0,count=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    if(arr[0]-0>k) printf("The Legend Falls.");
    else{
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>k){
                printf("The Legend Falls.");
                break;
            }
            if(start+k>=arr[i+1]) continue;
            else{
                count++;
                start=arr[i];
            }
        }
        if (start+k>=arr[n-1]) printf("%d",count);
    }
    return 0;
}