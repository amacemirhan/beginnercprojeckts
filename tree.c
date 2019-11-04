#include <stdio.h>
#include <stdlib.h>
int main()
{
   for (int i=1;i<9;i++){//satir
        for (int j=35;j>=(i*(i+1)/2);j--)
        printf("%c",' ');
    for (int j=0;j<=(i*(i+1)/2);j++)
        printf("%c",'*');
       for (int j=0;j<=(i*(i+1)/2);j++)
        printf("%c",'*');
    printf("\n");
    } for (int i=5;i>0;i--){
    for (int j=0;j<=30;j++)
        printf("%c",'  ');
    for (int j=0;j<=10;j++)
        printf("%c",'**');
        printf("\n");

    }

 return 0;
}
