#include <stdio.h>
#include <stdlib.h>
int armstronMu (int sayi){
int top=0;
int sayic=sayi;
while(sayi!=0){
    top+=(sayi%10)*(sayi%10)*(sayi%10);
    sayi=sayi/10;
}if (top==sayic)
return 1;
else return 0;
}
int main (){
    int num;
    do {
    printf("\nsayi giriniz:");
    scanf("%d",&num);
    if (num==0)
    printf("uygulama sonlandi");
    else if (armstronMu(num)==1)
        printf("Armstrong");
    else printf("Armstrong degil");
    }while(num!=0);
return 0;
}
