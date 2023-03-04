#include <stdio.h>
int main(){
    // 第一解法
    int a1,a2,b1,b2;
    scanf("%d.%d %d.%d", &a1, &a2, &b1, &b2);
    int ans =(a1*100+a2)*(b1*100+b2);
    printf("%d.%04d",ans/10000,ans%10000);

    // 第二解法
//    double a,b;
//    scanf("%lf%lf",&a,&b);
//    printf("%.4lf\n",a*b);
    return 0;
}