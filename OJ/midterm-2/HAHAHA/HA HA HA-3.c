#include <stdio.h>
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n,arr[1001];
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        int max=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int gd = gcd(arr[i],arr[j]);
                if(gd>max) max=gd;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}