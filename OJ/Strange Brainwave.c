#include <stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    while (t--){
        int total=0;
        scanf("%d %d",&a,&b);
        for(int i=0;i<a;i++) total^=i;
        total^=b;
        if(total==0) printf("%d\n",a);
        else if(total==a) printf("%d\n",a+2);
        else printf("%d\n",a+1);
    }
    return 0;
}