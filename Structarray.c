#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci {
char isim[20];
char soyisim[20];
int yas;
};
int main(){
    struct ogrenci ogrenci[3];
    int i;
    for (i=0;i<3;i++){
         printf("%d numarali ogrencinin bilgilerini giriniz:",i+1);
         scanf("%s %s %d",&ogrenci[i].isim,&ogrenci[i].soyisim,&ogrenci[i].yas);
    }
    for (i=0;i<3;i++){
         printf("%d numarali ogrencinin bilgileri:%s %s %d\n",i+1,ogrenci[i].isim,ogrenci[i].soyisim,ogrenci[i].yas);
    }



return 0;}
