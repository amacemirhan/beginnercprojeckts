#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a;
    int b;
    float net;
    printf("dogru sayisini giriniz:");
    scanf("%d",&a);
    printf("yanlis sayisini giriniz:");
    scanf("%d",&b);
    net=a-(b/4.0);
    printf("Net sayiniz %f\n",net);
    if (net<10)
        printf("Kur adi:Beginner\n");
    else if (net<30 && net>=10)
        printf("Kur adi:Elementary");
    else if (net<50 && net>=30)
        printf("Kur adi:Preintermediate");
    else if (net<70 && net>=50)
        printf("Kur adi:Intermediate");
        else
            printf("Kur adi:Upper");

   return 0;

}
