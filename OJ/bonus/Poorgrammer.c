#include <stdio.h>
long long int t,n,m;
long long int coffee[(int)2e6];
long long int drink(long long int day){
    long long int code = 0;
    for(int i=0;i<day;i++){
        code += coffee[i];
    }
    int count=0,c=1;
    for(int i=day;i<n;i++){
        count++;
        if(coffee[i]>c){
            code += coffee[i]-c;
        }
        else
            break;
        if(count == day){
            c++;
            count = 0;
        }
    }
    return code;
}
int main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld%lld", &n, &m);
        for(int i=0;i<n;i++){
            scanf("%lld" , &coffee[i]);
        }
        long long int ans = -1;
        long long int L = 1;
        long long int R = n+1;
        while(L<R){
            long long int day = (L+R)/2;
            if(drink(day)>= m){
                ans = day;
                R = day;
            }
            else
                L = day+1;
        }
        printf("%lld\n", ans);
    }
}
//xyza123