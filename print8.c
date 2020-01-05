#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("8 in genisligini giriniz:");
    scanf("%d",&n);
    for (i=0;i<2*n-1;i++){
        for (j=0;j<n;j++){
            if (i==0 || i==n-1 || i==2*n-2){
                printf(" ");
                for (int k=0;k<n-2;k++)
                    printf("*");
                printf(" ");
                break;
            }else {
            printf("*");
            for (int k=0;k<n-2;k++)
                    printf(" ");
                printf("*");
                break;
            }
        }printf("\n");
    }
    return 0;
}
