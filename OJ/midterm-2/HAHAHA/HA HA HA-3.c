#include <stdio.h>
int n;
int cal(int arr[]);
int gcd(int a,int b);
int main(){
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("%d",cal(arr));
    return 0;
}
int cal(int arr[]){
    int max;
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            int x = gcd(arr[j],arr[k]);
            if(x>max) max=x;
        }
    }
    return max;
}
// 輾轉相除法-3
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}