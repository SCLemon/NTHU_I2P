#include<stdio.h>
int main(){
    int array[100001] ,n ,k,count = 0,start=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&array[i]);
    if(array[0]-0>k){
        printf("The Legend Falls.");
    }
    else{
        for(int i=0;i<n-1;i++){
            if(array[i+1]-array[i]>k){
                printf("The Legend Falls.");
                break;
            }
            if (start + k >= array[i+1]) continue;
            else if (start + k < array[i+1]){
                count++;
                start = array[i];
            }
        }
        if (start+k>=array[n-1]) printf("%d",count);
    }

    return 0;
}