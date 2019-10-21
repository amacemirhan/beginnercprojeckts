#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i,j,a,b,top=0;
    printf("Kaca kaclik matris istiyorsunuýz(ornek:3enter3):");
    scanf("%d %d",&a,&b);
    int matrix[a][b];
    printf("Matrisinizi giriniz:");
    for (int i=0;i<a;i++){
    for (int j=0;j<b;j++){
    scanf("%d",&matrix[i][j]);
    }
    printf("\n");
    }
    for (i=0;i<a;i++){
    for (j=0;j<b;j++)
    printf("%d ",matrix[i][j]);
    printf ("\n");
}
    for (i=0;i<j;i++){
    top+=matrix[i][0];
    }
    printf("%d ",top);
    for (top=i=0;i<j;i++){
    top+=matrix[i][1];
    }
    printf("%d ",top);
    for (top=i=0;i<j;i++){
    top+=matrix[i][2];
    }
    printf("%d ",top);
}
