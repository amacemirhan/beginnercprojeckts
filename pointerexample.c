#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void islem(int num,int *h,int *m,int *s){
    *h=num/3600;
    *m=(num%3600)/60;
    *s=(num%3600)%60;
}


int main(){
    int saat,dak,san;
    int sayi;
    printf("sayi giriniz:");
    scanf("%d",&sayi);

    islem(sayi,&saat,&dak,&san);
    printf("%d saat %d dakika %d saniye",saat,dak,san);
return 0;}
