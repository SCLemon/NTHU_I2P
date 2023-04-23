#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(char str1[],char str2[]){
    if(strcmp(str1,str2)==0) return 1;
    else{
        if(strlen(str1)%2) return 0;
        else{
            int len = strlen(str1)/2;
            char* sub[4];
            for(int i=0;i<4;i++) sub[i] = (char*) malloc(len*sizeof (char));
            strncpy(sub[0],str1,len);
            strncpy(sub[1],str1+len,len);
            strncpy(sub[2],str2,len);
            strncpy(sub[3],str2+len,len);
            if(check(sub[0],sub[3])&&check(sub[1],sub[2]) || check(sub[0],sub[2])&&check(sub[1],sub[3])) return 1;
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        char str1[1001],str2[1001];
        scanf("%s",str1);
        scanf("%s",str2);
        if(check(str1,str2)==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}