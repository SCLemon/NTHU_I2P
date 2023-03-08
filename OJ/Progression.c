#include <stdio.h>
int main(){
    int x,y,z;
    int a,b;
    scanf("%d %d %d",&x,&y,&z);
    if(y-x == z-y){
        a=x-(y-x);
        b=z+(y-x);
    }
    else if(y/x == z/y){
        a=x/(y/x);
        b=z*(y/x);
    }
    printf("%d %d",a,b);
    return 0;
}