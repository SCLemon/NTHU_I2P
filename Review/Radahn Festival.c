#include <stdio.h>
#include <stdlib.h>
typedef struct _Segment{
    double l,r;
} Segment;
int cmp(const void* a, const void* b){
    Segment aa = *(Segment*)a;
    Segment bb = *(Segment*)b;
    if(aa.l>bb.l) return 1;
    if(aa.l<bb.l) return -1;
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        Segment seq[100001];
        long long N,Q;
        double tot=0;
        scanf("%lld%lld",&N,&Q);
        for(int i=0;i<Q;i++) scanf("%lf%lf",&seq[i].l,&seq[i].r);
        qsort(seq,Q,sizeof (seq[0]),cmp);
        tot+=seq[0].r-seq[0].l;
        double R=seq[0].r;
        double L=seq[0].l;
        for(int i=1;i<Q;i++){
            if(seq[i].r<=R && seq[i].l>=L){} // 全部重疊
            else if(seq[i].l<R && seq[i].r>R){ // 部分重疊
                tot+= seq[i].r-R;
                R=seq[i].r;
                L=seq[i].l;
            }
            else{
                tot+=seq[i].r-seq[i].l;
                R=seq[i].r;
                L=seq[i].l;
            }
        }
        printf("%lf\n",1-tot/N);
    }
    return 0;
}