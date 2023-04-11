#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        int arr[(int)2e5];
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        long long num=0;
        for(int i=0;i<n;i++) num^=arr[i];
        long long lowbit = num &(-num);
        int y=0;
        for(int i=0 ; i<n ;i++){
            if(lowbit & arr[i]){
                y ^=arr[i];
            }
        }
        int x = num ^ y;
        if(x>y){
            /*
                對調方法二
                     x^=y;
                     y^=x;
                     x^=y;
             */
            int temp =x;
            x=y;
            y=temp;
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}