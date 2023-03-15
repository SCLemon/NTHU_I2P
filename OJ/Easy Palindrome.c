#include <stdio.h>
int main(){
    int a,b;
    scanf("%d.%d",&a,&b);
    int c=1*(a/100)+10*(a%100/10)+100*(a%10);
    int d=1*(b/100)+10*(b%100/10)+100*(b%10);
    double sum=(a+c)+((b+d)/1000.);
    printf("%.3lf",sum);
    return 0;
}