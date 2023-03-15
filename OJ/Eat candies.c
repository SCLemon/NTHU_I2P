#include <stdio.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    while (t--){
        long long int sum=0;
        long long int num[3];
        scanf("%lld %lld %lld",&num[0],&num[1],&num[2]);
        for(int i=0;i<2;i++){
            int mid;
            for(int j=1;j<3;j++){
                if(num[j]<num[i]){
                    mid=num[i];
                    num[i]=num[j];
                    num[j]=mid;
                }
            }
        }
        if((num[0]+num[1])<(num[2])){
            sum=num[0]+num[1];
        }
        else{
            sum=(num[0]+num[1]+num[2])/2;
        }
        printf("%lld\n",sum);
    }
    return 0;
}