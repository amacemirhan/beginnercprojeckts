#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci {
char isim[20];
char soyisim[20];
int yas;
};
void degerDeg(struct ogrenci *p){
    scanf("%s %s %d",&p->isim,&p->soyisim,&p->yas);
}
void goster(struct ogrenci *p){
    printf("%s\n%s\n%d\n",p->isim,p->soyisim,p->yas);
}
int main(){
    struct ogrenci ogrenci1={"Emirhan","Amac",19};
    goster(&ogrenci1);
    degerDeg(&ogrenci1);
    printf("%s\n%s\n%d\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.yas);
return 0;}
