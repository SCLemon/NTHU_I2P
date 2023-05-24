#include <stdio.h>
int k,n;
int arr[15];

void printArr(){
    for(int i=1;i<k;i++) printf("%d ",arr[i]);
    printf("%d\n",arr[k]);
}
void findSeq(int len,int start_index){
    if(len==k+1){
        printArr();
        return;
    }
    for(int i=start_index;i<=n;i++){
        arr[len]=i;
        findSeq(len+1,i+1);
    }
}
int main(){
    scanf("%d%d",&k,&n);
    findSeq(1,1);
}