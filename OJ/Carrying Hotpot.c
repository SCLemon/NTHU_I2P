#include <stdio.h>
int main(){
    double x,y;
    int pre;
    scanf("%lf %lf %d",&x,&y,&pre);
    printf("%.*lf",pre,x*y);
    return 0;
}