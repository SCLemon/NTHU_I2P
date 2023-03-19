#include <stdio.h>
int main(){
    int num=0,num2,plus=0;
    int i=0,j=0;
    int a[12],b[12];
    scanf("%d",&num);
    num2=num+1; // N+1

    while(num>0){
        a[i]=num%2; // 奇數 1 , 偶數 0
        num=num/2; // 向左移一位
        i++;
    }
    i--; // 迴圈結束會多1 故需要 i--
    int max =i; // 紀錄 max

    while (num2>0){
        b[j]=num2%2;
        num2/=2;
        j++;
    }
    j--;

    //印出 binary of N+1
    for(j;j>=0;j--) {
        printf("%d", b[j]);
    }

    // 計算 carried
    for(i=0;i<=max;i++){
        if(a[i]!=0){
            plus++;
        }
        else{
            break;
        }
    }
    printf(" %d",plus);
    return 0;
}