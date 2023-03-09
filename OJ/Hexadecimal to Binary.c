#include <stdio.h>
int main(){
    int x,y,sum;
    int i=0;
    char binary[1000000];
    scanf("%x %x",&x,&y);
    sum=x+y;
    while(sum>0){
        binary[i]=sum%2;
        sum/=2;
        i++;
    }
    i--;
    for(i;i>=0;i--){
        printf("%d",binary[i]);
    }
    return 0;
}