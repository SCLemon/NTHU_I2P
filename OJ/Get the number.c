#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = rand()+1;
    int b=a-n;
    printf("%d %d",a,b);
    return 0;
}