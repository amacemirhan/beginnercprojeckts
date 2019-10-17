#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b;
 printf("Sayi giriniz:");
 scanf("%d",&a);
 printf("Dige sayiyi giriniz:");
 scanf("%d",&b);
 int moda=a%2,modb=b%2;
 if (moda==1 && modb==1)
    printf("%d\n",a+b);
    if (moda==1 && modb==0)
        printf("%d\n",a-b);
    if (moda==0 && modb==1)
        printf("%d\n",b-a);
    if (moda==0 && moda==0)
        printf("%d\n",a+b);



        return(main());
    }
