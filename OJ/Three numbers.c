#include <stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int sum=(A+B+C)/2;
    int a=sum-B;
    int b=sum-C;
    int c=sum-A;
    printf("%d %d %d\n",a,b,c);
    return 0;
}