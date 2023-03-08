#include <stdio.h>
#include <math.h>
int factors(int num);
int main(){
    int t,L,R;
    int max_f,min_num;
    scanf("%d",&t);
    for(int i=1; i<=t;i++){
        scanf("%d %d",&L,&R);
        min_num=L;
        max_f= factors(L);
        for(int j=L+1;j<=R;j++){
            int sum= factors(j);
            if(sum>max_f){
                max_f= sum;
                min_num=j;
            }
        }
        printf("%d\n",min_num);
    }
    return 0;
}
int factors(int num){
    int total=0;
    for(int i=1;i<= sqrt(num);i++){
        if(num%i==0){
            total+=2;
        }
        if(i== sqrt(num)){
            total--;
        }
    }
    return total;
}