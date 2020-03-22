#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,j;
    FILE *dosya;
    dosya=fopen("carpimtablosu.txt","w");
    for (i=1;i<=10;i++){
        for (j=1;j<=10;j++){
            fprintf(dosya,"%d * %d = %d\n",i,j,i*j);
            if (j==10)
                fprintf(dosya,"\n");
        }
    }

return 0;}
