#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct adress {
    char sehir[20];
    char ilce[20];
    char mah[20];
    char cad[20];
    int no;
    int kat;
    int daire;
    };
    struct vatandas {
    char isim[20];
    char soyisim[20];
    int yas;
    char cinsiyet;
    struct adress adres;
    };
int main(){
    struct vatandas vatandas1;
    strcpy(vatandas1.isim,"Mehmed Emirhan");
    strcpy(vatandas1.soyisim,"Amac");
    vatandas1.yas=19;
    vatandas1.cinsiyet='e';
    strcpy(vatandas1.adres.sehir,"istanbul");
    strcpy(vatandas1.adres.ilce,"zeyitnbunu");
    strcpy(vatandas1.adres.mah,"yenidogan");
    strcpy(vatandas1.adres.cad,"Sht. Kom.Gunaydin");
    vatandas1.adres.no=116;
    vatandas1.adres.kat=3;
    vatandas1.adres.daire=15;
    printf("%s %s %d %c %s %s %s %s %d %d %d",vatandas1.isim,vatandas1.soyisim,vatandas1.yas,vatandas1.cinsiyet,vatandas1.adres.sehir,vatandas1.adres.ilce,vatandas1.adres.mah,vatandas1.adres.cad,vatandas1.adres.no,vatandas1.adres.kat,vatandas1.adres.daire);

return 0;}
