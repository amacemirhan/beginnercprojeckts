#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretnum;
    secretnum=-1+rand()%11;
    srand(time(NULL));
    int num;
    int kalan=3;
    printf("You have 3 entry\nSecret number is one digit\n");
    while (!(secretnum==num)){
        printf("Enter a number:");
        scanf("%d",&num);
        kalan--;
        if (kalan==0){
            printf("you lose :(\n");
            return main();
        }
    } printf("YOU WÝN!\n");
    return main();
}
