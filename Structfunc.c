#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci {
char isim[20];
char soyisim[20];
int yas;
};
void goster(struct ogrenci a){
    printf("%s %s %d",a.isim,a.soyisim,a.yas);
}
struct ogrenci degerAl(){
    struct ogrenci yeni;
    printf("bilgileri girin:");
    scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.yas);
    return yeni;
};
int main(){
    struct ogrenci ogrenci1=degerAl();
    goster(ogrenci1);
return 0;}
