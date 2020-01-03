#include <stdio.h>
#include <stdlib.h>
void kok(int A,int B,int C){
    int Dsk=(B*B-(4*A*C));
    if (Dsk<0)
        printf("Reel kok yoktur!");
    else if (Dsk==0)
        printf("Iki esit koku vardir");
    else
        printf("Iki farkli koku vardir");
}
int main(){
    int a,b,c;
printf ("\nAX^2+BX+C denklemindeki A,B ve C yi giriniz:");
printf("\nA=");scanf("%d",&a);
printf("B=");scanf("%d",&b);
printf("C=");scanf("%d",&c);
kok(a,b,c);


    return main();
}
