#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char yazi[256];
    FILE *filep=fopen("ornekdosya.txt","a");
    printf("Bir þeyler yazin:");
    fgets(yazi,256,stdin);
    fputs(yazi,filep);
    printf("dosyaya yazildi");
    fclose(filep);

return 0;}
