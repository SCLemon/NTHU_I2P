#include <stdio.h>
#include <stdlib.h>
typedef struct _Segment{
    double l,r;
} Segment;

int cmp(const void*L, const void *R){
    Segment a = *(Segment*)L;
    Segment b = *(Segment*)R;
    if(a.l>b.l) return 1;
    else if(a.l==b.l) return 0;
    else if(a.l<b.l) return -1;
}
int main(){
    int t;
    long long N,Q;
    double tot;
    scanf("%d",&t);
    while (t--) {
        Segment s[100001];
        tot=0;
        scanf("%lld%lld",&N,&Q);
        for(int i=0;i<Q;i++) scanf("%lf%lf",&s[i].l,&s[i].r);
        qsort(s,Q,sizeof (s[0]),cmp);
        double R = s[0].r;
        double L = s[0].l;
        tot+=s[0].r-s[0].l;
        for(int i=1;i<Q;i++){
            if(s[i].r<=R && s[i].l >= L){} // 完全重疊
            else if(s[i].r>R && s[i].l<R){ // 部分重疊
                tot+=s[i].r-R;
                R = s[i].r;
                L = s[i].l;
            }
            else{ // 完全不重疊
                tot+=s[i].r-s[i].l;
                R = s[i].r;
                L = s[i].l;
            }
        }
        printf("%lf\n",(1-tot/N));
    }
}



