#include <stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        int x=0;
        for(int j=0;j<a;j++){
            x^=j;
        }
        x^=b;
        if(x==0){
            printf("%d\n",a);
        }
        else if(x==a){
            printf("%d\n",a+2);
        }
        else{
            printf("%d\n",a+1);
        }
    }
    return 0;
}