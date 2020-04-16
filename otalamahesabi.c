#include <stdio.h>
#include <stdlib.h>

struct yapi{
    char adsoyad[30],ders[20];
    int vize1,vize2,finalnot;
    float ort;
};
int main()
{
    int N,i;
    FILE *dosya=fopen("ortalama.txt","w");
    printf("Kac Adet Ogrenci Hesaplamak Istiyorsunuz:");
    scanf("%d",&N);
    struct yapi ogrenci[N];
    for (i=0;i<N;i++){
        fflush(stdin);
      printf("Ogrencinin ismini ve soyismini giriniz:");
      gets(ogrenci[i].adsoyad);
      printf("Dersin ismini giriniz:");
      gets(ogrenci[i].ders);
      printf("Sýrayla vize 1,vize 2,final notunu giriniz:");
      scanf("%d",&ogrenci[i].vize1);
      scanf("%d",&ogrenci[i].vize2);
      scanf("%d",&ogrenci[i].finalnot);
      ogrenci[i].ort=((ogrenci[i].vize1+ogrenci[i].vize2+(ogrenci[i].finalnot*3)*1.0)/5);
      fprintf(dosya,"%s adli kiþinin %s dersindeki ortalamasi %f\n",ogrenci[i].adsoyad,ogrenci[i].ders,ogrenci[i].ort);

    }
    fclose(dosya);
    return 0;
}

