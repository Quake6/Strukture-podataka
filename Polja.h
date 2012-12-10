struct tosoba {
    int ai,bi,ci,di,godina;
    char ime[40],prezime[40],devizni_valuta[40];
    float tekuci,devizni;
    tosoba*sljedeci;
};
struct tred {
    tosoba* f,*rear;
};
int AddOne(int n) {
    return((n+1)%10000);
}
int InitQ(tred*el) {
    tosoba*glava=new tosoba;
    glava->sljedeci=NULL;
    el->f=glava;
    el->rear=glava;
}
bool IsEmptyQ(tred*el) {
    if(el->rear==el->f)return 1;
    return 0;
}
void enq(tosoba*pacijent,tred*el) {
    el->rear->sljedeci=pacijent;
    pacijent->sljedeci=NULL;
    el->rear=pacijent;
}
tosoba*f(tred*el) {
    tosoba*pacijent;
    pacijent=el->f->sljedeci;
    return pacijent;
}
void deq(tred*el) {
    tosoba*glava=el->f;
    el->f=glava->sljedeci;
    delete glava;
}