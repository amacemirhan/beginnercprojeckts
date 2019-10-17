#include <stdio.h>
#include <stdlib.h>

int main()
{
    long num;
    int hane=0;
    int top=0;
    printf("Sayi giriniz :");
    scanf("%d",&num);
    for (;num>0;hane++){
        top += num%10;
        num = num/10;
    }
        printf("%d haneli sayinin sayilar toplami %d" ,hane,top);

    return 0;
}

