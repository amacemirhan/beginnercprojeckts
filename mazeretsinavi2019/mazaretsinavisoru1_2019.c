#include <stdio.h>
#include <stdlib.h>

int main (){
int i,j,a,k;
printf("Satir sayisini giriniz;");
scanf("%d",&a);
for (i=0;i<a;i++){
        for (j=0;j<a;j++){
            if (i+j==a-1 || i==a-1)
                printf("x");
            else
                printf(" ");
            }for (k=0;k<a-1;k++){
            if (i==0 || i+k==a-2)
                printf("x");
            else
                printf(" ");
            }
    printf("\n");
}
return 0;
}
