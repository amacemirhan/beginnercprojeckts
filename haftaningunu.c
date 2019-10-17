#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("haftanin .. gunu ;");
    scanf("%d",&num);
    switch (num%7){
        case 1:
        printf("Pazartesi");
        break;
        case 2:
        printf("Sali");
        break;
        case 3:
        printf("Carsamba");
        break;
        case 4:
        printf("Persembe");
        break;
        case 5:
        printf("Cuma");
        break;
        case 6:
        printf("Cumartesi");
        break;
        case 0:
        printf("Pazar");
        break;
    }

printf("\n");
    return main();
}
