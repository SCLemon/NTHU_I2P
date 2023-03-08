#include <stdio.h>
int main(){
    double x,y,mult;
    int z;
    scanf("%lf %lf %d",&x,&y,&z);
    mult=x*y;
    printf("%.*lf",z,mult);
    return 0;
}