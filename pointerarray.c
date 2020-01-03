#include <stdio.h>
#include <stdlib.h>
void *bastir(char*gunler[],int size){
if (size>7)
    printf("yanlis deger");
else
    printf("%s",gunler[size-1]);
}
int main (){
    char *gunler[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
    bastir(gunler,8);
return 0;
}
