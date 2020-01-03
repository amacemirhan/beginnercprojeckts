#include <stdio.h>
#include <stdlib.h>
int tersbul(int x){
int S=0;
while (x>0){
    S=S*10+(x%10);
    x=x/10;
}
return S;}
int main (){
    int x;
printf ("\nSayi giriniz.");
scanf("%d",&x);
if (x==tersbul(x))
    printf("Sayi palindromik sayidir");
    else
        printf("Sayi palindromik degildir");
return main();
}
