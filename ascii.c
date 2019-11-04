#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    printf("Karakter giriniz:");
    scanf(" %c",&harf);
    if (harf>32 && harf<48 || harf>57 && harf<65)
        printf("Ozel karakter");
    else if (harf>47 && harf<58)
        printf("Karakter rakam");
    else {
        switch (harf){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'O':
    case 'o':
    case 'I':
    case 'i':
    case 'U':
    case 'u':
    printf("Sesli harf");
    break;
    default:printf("Sessiz harf");
        }
    }
    printf("\n");
    return main();
}
