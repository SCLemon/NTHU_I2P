#include <stdio.h>
#include <string.h>
#define MOD 1000000007
char str[2000006];
char temp[2000006];
int main(){
    int t,x;
    int slen,templen,left;
    long long tlen;
    scanf("%d",&t);
    while(t--){
        scanf("%d %s",&x,str);
        tlen=slen=strlen(str);
        for(int i=0; i<slen && i<x ;i++){
            left=str[i]-'0';
            tlen=((i+1)%MOD + left*(tlen-(i+1)%MOD+MOD) % MOD);
            if(x>slen){
                strncpy(temp,str+i+1,slen-i);
                templen=strlen(temp);
                for(int j=0; j<left-1 && slen<x ;j++){
                    strcat(str,temp);
                    slen+=templen;
                }
            }
        }
        printf("%lld\n",tlen);
    }
    return 0;
}