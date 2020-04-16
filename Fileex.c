#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    char kar;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    FILE *dosya;
    dosya=fopen("tekcift.txt","w");
    for(int i=0;i<sayi;i++){
        if(i%2==0)
            fprintf(dosya,"%d->cift\n",i);
        else
            fprintf(dosya,"%d->tek\n",i);
    }fclose(dosya);
    fopen("tekcift.txt","r");
    kar=fgetc(dosya);
        while(kar!=EOF){
                printf("%c",kar);
            kar=fgetc(dosya);
        }
    return 0;
}
