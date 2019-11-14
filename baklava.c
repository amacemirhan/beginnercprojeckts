#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j,k,n,m,r;
    printf("kosegen girin:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for (j=0;j<n-i;j++)
            printf(" ");
        for (k=0;k<i;k++)
            printf("*");
            for (m=0;m<i-1;m++)
                printf("*");
            for (r=0;r<n-i;r++)
            printf(" ");
        printf("\n");
    }
    for (i=1;i<n;i++){
            for (j=0;j<i;j++)
            printf(" ");
    for (k=0;k<n-i;k++)
        printf("*");
    for (m=0;m<n-1-i;m++)
        printf("*");
    for(r=0;r<i;r++)
        printf(" ");
        printf("\n");
    }

    return 0;
}
