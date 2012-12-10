#include <iostream>
using namespace std;

struct tosoba {
    int ai,bi,ci,di,godina;
    char ime[40],prezime[40],devizni_valuta[40];
    float tekuci,devizni;
    tosoba*sljedeci;
};
int AddOne(int n) {
    return((n+1)%10000);
}
struct tred {
    tosoba*pacijent[10000];
    int f,r;
};
void enq (tosoba*pacijent, tred *el) {
    if (AddOne(AddOne(el->r)) == (el->f))
        cout<<"RED JE PUN!!\n\n";
    else {
        el->r = AddOne(el->r);
        el->pacijent[el->r] = pacijent;
    }
}
int IsEmptyQ(tred*el) {
    int r=el->r;
    if(AddOne(r)==el->f)return 1;
    return 0;
}
tosoba*f(tred*el) {
    if(!IsEmptyQ)cout<<"RED JE PRAZAN!\n";
    return el->pacijent[el->f];
}
void deq(tred*el) {
    el->f++;
}
void InitQ(tred*el) {
    el->f=0;
    el->r=9999;
}
