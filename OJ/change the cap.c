#include <stdio.h>
#include <math.h>
int main(){
    int total;
    scanf("%d",&total);
    int sum=0;
    int cap=0;
    int buy=0;
    while (sum<total){
        sum++;
        cap++;
        buy++;
        if(cap%3==0){
            sum++; // 送一瓶
            cap=1; // 送的那瓶瓶蓋
        }
    }
    printf("%d",buy);
    return 0;
}