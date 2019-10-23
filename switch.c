#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tur;
    int gun,km,ucret=0;
    printf("Tasitin turunu girin\nA,a=ARAZI\nB,b=BINEK\nS,s=SPOR\n");
    printf("Tasitin turunu girin:");
    scanf("%c",&tur);
    printf("Tasiti kac gun kullandiniz:");
    scanf("%d",&gun);
    printf("Tasitla kac km yol yaptiniz:");
    scanf("%d",&km);
    switch (tur){
    case ('a'):
    case ('A'):
    ucret=(18*km)+(gun*20);
    printf("Odemeniz gereken tutar %d$",ucret);
    break;
    case ('b'):
    case ('B'):
    printf("Odemeniz gereken tutar %d$",(22*km+gun*32));
    break;
    case ('s'):
    case ('S'):
    printf("Odemeniz gereken tutar %d$",(36*km+gun*51));
    break;
    default:printf("Yanlis deger girdiniz");
    }
    return 0;
}

