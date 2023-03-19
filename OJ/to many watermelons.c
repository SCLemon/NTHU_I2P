#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int index[num],eat[num],ans[num];
    for(int i=0;i<num;i++){
        scanf("%d",&index[i]);
    }
    for(int i=0;i<num;i++){
        scanf("%d",&eat[i]);
    }
    int mid=0;
    int flag=1;
    for(int j=0;j<num;j++){
        for(int k=mid;k<num;k++){
            if(eat[j]==index[k]){
                mid=k+1;
                flag=0;
                printf("%d ",k+1-mid);
                break;
            }
        }
        if(flag){
            printf("0 ");
        }
        flag=1;
    }
    return 0;
}