#include <stdio.h>
#include <stdlib.h>

int main()
{
    float array[5],top=0;
    for (int i=0;i<5;i++){
            printf ("sayi girin:");
    scanf("%f",&array[i]);
        top+=array[i];
    }
printf("%f",top/5.0);
    return 0;
}

