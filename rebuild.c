#include <stdio.h>
#include <stdlib.h>
//https://codeforwin.org/2017/03/c-program-to-right-rotate-array.html
int main(){
int i,b,c;
printf("10 elemanlý array oluþtur:\n");
int d[10];
for (i=0;i<10;i++)
scanf("%d",&d[i]);
printf("sondan kac eleman basa gelsin:");scanf("%d",&b);
    for (i=b;i>0;i--){
        c=d[9];
        for (int j=1;j<=9;j++)
        d[10-j]=d[9-j];
        d[0]=c;}
    for (i=0;i<10;i++) printf("%d ",d[i]);
    return 0;
}
